%{
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "ts.h"
#include "quad.h"
extern int yylex(); // Declare the lexer function
extern int yylineno; // Declare the line number variable if used

int nb_line=1;
int nb_character=0;
char *file_name;
char typeIDF[20];
char savet[20];
char para[20];
char pas[20];

char i[20];
int deb_else;
int fin_if;
int fin_for;
int deb_for;
int qc;

char partie1_1[20];
char partie2_1[20];
char partie1_2[20];
char partie2_2[20];
char index_start_for[20];
char ch[20];
char cat[20];
int tmp=0;
char temp[20];

char tab[20];

%}

%union {
    char* str;
}

%type <str>EXPRESSION INDEX AFFECTATION CONDITION CONTROLE BOUCLE OPCOMP OPLOG TYPE MEMBREIDF MESSAGE MESSAGEIDF
;

%token <str>plus minus mul divi aff pvg po pf pt vg dp
        kwVAR_GLOBAL kwDECLARATION kwCONST kwINSTRUCTION kwINTEGER kwFLOAT kwCHARACTER kwREAD kwWRITE kwIF kwFOR
       kwELSE kwENDIF  kwOR kwAND kwGT kwGE kwEQ kwLE kwLT kwNE 
       integer real character idf boolean ao af co cf
;

%start CODE

%right aff 
%left plus minus
%left mul divi
%left kwEQ kwNE kwLT kwLE kwGT kwGE
%left kwOR
%left kwAND 

%%
CODE: kwVAR_GLOBAL ao DEC af MAIN {printf("\n\nCode correct!\n\n"); YYACCEPT;}
;

MAIN: kwINSTRUCTION ao INST af { printf("\n\n declaration main correct!\n\n");}
;

DEC: DECSOLO DEC 
   | DECTAB  DEC
   | DECCONST DEC
   |
;

TYPE: kwINTEGER  {$$=strdup($1);strcpy(savet,$1);}
    | kwFLOAT     {$$=strdup($1);strcpy(savet,$1);}
    | kwCHARACTER  {$$=strdup($1);strcpy(savet,$1);}
;

DECCONST:kwCONST TYPE idf aff EXPRESSION pvg 
            {
                diviserChaine($5,partie1_1,partie1_2);
                if (idf_existe($3,"Variable") || idf_existe($3,"Vecteur") || idf_existe($3,"Constante")) {
                  printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,$2);
                  printf("I AM HERE 1");
                  YYABORT;
                }
                  miseajour($3,"Constante",$2,partie1_2,"/","/","SEMANTIQUE");

                if (strcmp($2,partie1_1)!=0 && strcmp(partie1_1,"/")!=0) {
                  if(strcmp($2,"REAL")!=0 || strcmp(partie1_1,"INTEGER")!=0 ){
                    printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                    printf("HIII 1!");
                    YYABORT;
                  }
                }
                remplir_quad("=",partie1_2,"<vide>",$3);
            }
;

DECSOLO: TYPE idf LISTVAR pvg 
              { 
                if (idf_existe($2,"Variable") || idf_existe($2,"Vecteur") || idf_existe($2,"Constante")) {
                  printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,$2);
                  printf("I AM HERE 2");
                  YYABORT;
                }
                  miseajour($2,"Variable",$1,"-1","/","/","SYNTAXIQUE");
              }
       | TYPE idf aff EXPRESSION LISTVAR pvg 
              { 
                diviserChaine($4,partie1_1,partie1_2);
                if (idf_existe($2,"Variable") || idf_existe($2,"Vecteur") || idf_existe($2,"Constante")) {
                  printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,$2);
                  printf("I AM HERE 3");
                  YYABORT;
                }
                  miseajour($2,"Variable",$1,partie1_2,"/","/","SEMANTIQUE");

                if (strcmp($1,partie1_1)!=0 && strcmp(partie1_1,"/")!=0) {
                  if(strcmp($1,"REAL")!=0 || strcmp(partie1_1,"INTEGER")!=0 ){
                    printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                    printf("HIII 2!");
                    YYABORT;
                  }
                }
                remplir_quad("=",partie1_2,"<vide>",$2);
              }

; 

DECTAB: TYPE idf co integer cf LISTVAR pvg 
            { 
              if (idf_existe($2,"Variable") || idf_existe($2,"Vecteur") || idf_existe($2,"Constante")) {
                printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,$2);
                printf("I AM HERE 4");
                YYABORT;
              }

                miseajour($2,"Vecteur",$1,"/",$4,$4,"SYNTAXIQUE");
              
              if(atof($4)<1){
                printf("\nFile '%s', line %d, character %d: semantic error : Negative dimension of vector.\n",file_name,nb_line,nb_character);
                YYABORT;
              }
              remplir_quad("BOUNDS","1",$4,"<vide>");
              remplir_quad("ADEC",$2,"<vide>","<vide>");
            }
;

LISTVAR: LISTVARSOLO
       | LISTVARTAB
       |
;

LISTVARSOLO: vg idf LISTVAR 
                  {  
                    if (idf_existe($2,"Variable") || idf_existe($2,"Vecteur") || idf_existe($2,"Constante")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,$2);
                      printf("I AM HERE 5");
                      YYABORT;
                    }
    
                      miseajour($2,"Variable",savet,"-1","/","/","SYNTAXIQUE");
                  }
           | vg idf aff EXPRESSION LISTVAR 
                  { 
                    diviserChaine($4,partie1_1,partie1_2);
                    if (idf_existe($2,"Variable") || idf_existe($2,"Vecteur") || idf_existe($2,"Constante") ) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,$2);
                      printf("I AM HERE 6");
                      YYABORT;
                    }
                      miseajour($2,"Variable",savet,partie1_2,"/","/","SEMANTIQUE");
                    if (strcmp(getType($2,"Variable"),partie1_1)!=0 && strcmp(partie1_1,"/")!=0) {
                      if(strcmp(getType($2,"Variable"),"REAL")!=0 || strcmp(partie1_1,"INTEGER")!=0 ){
                        printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                        printf("HIII 3!");
                        YYABORT;
                      }
                    }
                    if(strcmp(getType($2,"Variable"),"CHARACTER")==0 && strcmp(partie1_1,"CHARACTER")==0 ){
                      if (!verif_char($2,"Variable",partie1_2)) {
                        printf("\nFile '%s', line %d, character %d: semantic error : String too long.\n",file_name,nb_line,nb_character);
                        YYABORT;
                      }
                    }
                    remplir_quad("=",partie1_2,"<vide>",$2);
                  }
;

LISTVARTAB: vg idf po integer pf LISTVAR 
                  { 
                    if (idf_existe($2,"Variable") || idf_existe($2,"Vecteur") || idf_existe($2,"Constante")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,$2);
                      printf("I AM HERE 7");
                      YYABORT;
                    }
                      miseajour($2,"Vecteur",savet,"/",$4,$4,"SYNTAXIQUE");
                    if(atof($4)<1){
                      printf("\nFile '%s', line %d, character %d: semantic error : Negative dimension of vector.\n",file_name,nb_line,nb_character);
                      YYABORT;
                    }
                    remplir_quad("BOUNDS","1",$4,"<vide>");
                    remplir_quad("ADEC",$2,"<vide>","<vide>");
                  }
;

INST: INSTS INST
    |
;

INSTS: ENTREE      pvg 
     | SORTIE      pvg 
     | AFFECTATION pvg 
     | CONTROLE        
     | BOUCLE     
; 

AFFECTATION: idf aff EXPRESSION  
                  { 
                    if(idf_existe($1,"Constante")){
                      printf("\nFile '%s', line %d, character %d: semantic error : Can't change the value of a Constante '%s'.\n",file_name,nb_line,nb_character,$1);
                      YYABORT;
                    }
                    if (!idf_existe($1,"Variable")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,$1);
                      printf("HELLO 1");
                      YYABORT;
                    }
                    diviserChaine($3,partie1_1,partie1_2);
                    strcpy(typeIDF,getType($1,"Variable"));
                    if (strcmp(typeIDF,partie1_1)!=0 && strcmp(typeIDF,"/")!=0 && strcmp(partie1_1,"/")!=0) {
                      if(strcmp(typeIDF,"FLOAT")!=0 || strcmp(partie1_1,"INTEGER")!=0 ){
                          printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                          printf("\n HIII 4!");
                          printf("\n partie 1: %s",partie1_1);
                          printf("\n partie 1: %s",partie1_2);
                          printf("\n partie 1_2: %s",$3);
                          printf("\n ptype: %s",typeIDF);
                          
                        YYABORT;
                      }
                    }
                    if(strcmp(typeIDF,"CHARACTER")==0 && strcmp(partie1_1,"CHARACTER")==0 ){
                      if (!verif_char($1,"Variable",partie1_2)) {
                        printf("\nFile '%s', line %d, character %d: semantic error : String too long'.\n",file_name,nb_line,nb_character);
                        YYABORT;
                      }
                    }
                    remplir_quad("=",partie1_2,"<vide>",$1);
                    miseajour($1,"Variable","-1",partie1_2,"-1","-1","SEMANTIQUE");
                  }
           | idf co INDEX cf aff EXPRESSION
                  { 
                    if(idf_existe($1,"Constante")){
                      printf("\nFile '%s', line %d, character %d: semantic error : Can't change the value of a Constante '%s'.\n",file_name,nb_line,nb_character,$1);
                      YYABORT;
                    }
                    diviserChaine($6,partie1_1,partie1_2);
                    if (!idf_existe($1,"Vecteur")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,$1);
                      printf("HELLO 2");
                      YYABORT;
                    }
                    strcpy(typeIDF,getType($1,"Vecteur"));
                                        if(strcmp(typeIDF,"CHARACTER")==0 && strcmp(partie1_1,"CHARACTER")==0 ){
                      if (!verif_char($1,"Variable",partie1_2)) {
                        printf("\nFile '%s', line %d, character %d: semantic error : String too long'.\n",file_name,nb_line,nb_character);
                        YYABORT;
                      }
                    }
                    if (strcmp(typeIDF,partie1_1)!=0 && strcmp(typeIDF,"/")!=0 && strcmp(partie1_1,"/")!=0) {
                      if(strcmp(typeIDF,"REAL")!=0 || strcmp(partie1_1,"INTEGER")!=0){
                        printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                        printf("HIII 5!");
                        YYABORT;

                      }
                    }
                    strcat(tab,$1);strcat(tab,$2);strcat(tab,$3);strcat(tab,$4);
                    remplir_quad("=",partie1_2,"<vide>",tab);
                    miseajour($1,"Variable","-1",partie1_2,"-1","-1","SEMANTIQUE");
                    strcpy(tab," ");
                  }   
        | idf co INDEX cf aff character
        {
                    if (!idf_existe($1,"Vecteur")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,$1);
                      printf("HELLO 41");
                      YYABORT;
                    }
                    if(idf_existe($1,"Constante")){
                      printf("\nFile '%s', line %d, character %d: semantic error : Can't change the value of a Constante '%s'.\n",file_name,nb_line,nb_character,$1);
                      YYABORT;
                    }
                    if (!verif_index($1,"Vecteur",$3)) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Index out of range '%s(%s)'.\n",file_name,nb_line,nb_character,$1,$3);
                      YYABORT;
                    }
                    if(strcmp("CHAR",getType($1,"Vecteur"))!=0){
                    printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                      YYABORT;                      
                    }
                    if (strlen($6) != 3) {
                    printf("\nFile '%s', line %d, character %d: semantic error : MESSAGE length must be exactly 3.\n", file_name, nb_line, nb_character);
                    YYABORT;
                  }
                  strcat(tab,$1);strcat(tab,$2);strcat(tab,$3);strcat(tab,$4);
                  remplir_quad("=",$6,"<vide>",tab);
                  strcpy(tab," ");

        }
        | idf aff character
        {
                    if (!idf_existe($1,"Variable")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,$1);
                      printf("HELLO 42");
                      YYABORT;
                    }
                    if(idf_existe($1,"Constante")){
                      printf("\nFile '%s', line %d, character %d: semantic error : Can't change the value of a Constante '%s'.\n",file_name,nb_line,nb_character,$1);
                      YYABORT;
                    }
                    if(strcmp("CHAR",getType($1,"Variable"))!=0){
                    printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                      YYABORT;                      
                    }
                    if (strlen($3) != 3) {
                    printf("\nFile '%s', line %d, character %d: semantic error : MESSAGE length must be exactly 3.\n", file_name, nb_line, nb_character);
                    YYABORT;
                  }
                  remplir_quad("=",$3,"<vide>",$1);
        }     
;
 
EXPRESSION: EXPRESSION plus EXPRESSION
                  { 
                    diviserChaine($1,partie1_1,partie1_2);
                    diviserChaine($3,partie2_1,partie2_2);
                    sprintf(temp,"T%d",tmp);
                    if (strcmp(partie1_1,"CHARACTER") == 0 || strcmp(partie1_1,"LOGICAL") == 0 || strcmp(partie2_1,"CHARACTER") == 0 || strcmp(partie2_1,"LOGICAL") == 0) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                      printf("HIII 7!");
                      YYABORT;
                    }
                    if (strcmp(partie1_1,"REAL") == 0 || strcmp(partie2_1,"REAL") == 0 && strcmp(partie1_1,"/")!=0 && strcmp(partie2_1,"/")!=0){
                      strcpy(cat,"REAL-");
                      strcat(cat,temp);
                      $$=strdup(cat);
                    }
                    else{
                      strcpy(cat,"INTEGER-");
                      strcat(cat,temp);
                      $$=strdup(cat);
                    }
                    remplir_quad("+",partie1_2,partie2_2,temp);
                    tmp++;

                  }  
          | EXPRESSION minus EXPRESSION
                  { 
                    diviserChaine($1,partie1_1,partie1_2);
                    diviserChaine($3,partie2_1,partie2_2);
                    sprintf(temp,"T%d",tmp);
                    if (strcmp(partie1_1,"CHARACTER") == 0 || strcmp(partie1_1,"LOGICAL") == 0 || strcmp(partie2_1,"CHARACTER") == 0 || strcmp(partie2_1,"LOGICAL") == 0) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                      printf("HIII 8!");
                      YYABORT;
                    }
                    if (strcmp(partie1_1,"REAL") == 0 || strcmp(partie2_1,"REAL") == 0 && strcmp(partie1_1,"/")!=0 && strcmp(partie2_1,"/")!=0){
                      strcpy(cat,"REAL-");
                      strcat(cat,temp);
                      $$=strdup(cat);
                    }
                    else{
                      strcpy(cat,"INTEGER-");
                      strcat(cat,temp);
                      $$=strdup(cat);
                    }
                    remplir_quad("-",partie1_2,partie2_2,temp);
                    tmp++;
                  }  
          | EXPRESSION mul EXPRESSION
                  { 
                    diviserChaine($1,partie1_1,partie1_2);
                    diviserChaine($3,partie2_1,partie2_2);
                    sprintf(temp,"T%d",tmp);
                    if (strcmp(partie1_1,"CHARACTER") == 0 || strcmp(partie1_1,"LOGICAL") == 0 || strcmp(partie2_1,"CHARACTER") == 0 || strcmp(partie2_1,"LOGICAL") == 0) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                      printf("HIII 9!");
                      YYABORT;
                    }
                    if (strcmp(partie1_1,"REAL") == 0 || strcmp(partie2_1,"REAL") == 0 && strcmp(partie1_1,"/")!=0 && strcmp(partie2_1,"/")!=0){
                      strcpy(cat,"REAL-");
                      strcat(cat,temp);
                      $$=strdup(cat);
                    }
                    else{
                      strcpy(cat,"INTEGER-");
                      strcat(cat,temp);
                      $$=strdup(cat);
                    }
                    remplir_quad("*",partie1_2,partie2_2,temp);
                    tmp++;
                  }  

          | EXPRESSION divi EXPRESSION 
                  {  
                    diviserChaine($1,partie1_1,partie1_2);
                    diviserChaine($3,partie2_1,partie2_2);
                    sprintf(temp,"T%d",tmp);
                    if (strcmp(partie2_2,"0") == 0) { 
                      printf("\nFile '%s', line %d, character %d: semantic error : Division by zero.\n",file_name,nb_line,nb_character);
                      YYABORT;
                    }
                    if (strcmp(partie1_1,"CHARACTER") == 0 || strcmp(partie1_1,"LOGICAL") == 0 || strcmp(partie2_1,"CHARACTER") == 0 || strcmp(partie2_1,"LOGICAL") == 0) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                      printf("HIII 10!");
                      YYABORT;
                    }
                    strcpy(cat,"REAL-");
                    strcat(cat,temp);
                    $$=strdup(cat);
                    remplir_quad("/",partie1_2,partie2_2,temp);
                    tmp++;
                  } 

          | idf  
                  { 
                    if (!idf_existe($1,"Variable") && !idf_existe($1,"Constante")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,$1);
                      printf("HELLO 3");
                      YYABORT;
                    }
                    strcpy(ch,"-");
                    strcat(ch,$1);
                    if (idf_existe($1,"Variable") || idf_existe($1,"Constante")) strcpy(cat,getType($1,"Variable"));
                    strcat(cat,ch);
                    $$=strdup(cat);
                  }      
          | idf co INDEX cf 
                  {
                    if (!idf_existe($1,"Vecteur")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,$1);
                      printf("HELLO 44");
                      YYABORT;
                    }
                    if (!verif_index($1,"Vecteur",$3)) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Index out of range '%s(%s)'.\n",file_name,nb_line,nb_character,$1,$3);
                      YYABORT;
                    }
                    strcpy(ch,"-");
                    strcat(tab,$1);strcat(tab,$2);strcat(tab,$3);strcat(tab,$4);
                    strcat(ch,tab);
                    strcpy(tab," ");
                    if (idf_existe($1,"Vecteur")) strcpy(cat,getType($1,"Vecteur"));
                    strcat(cat,ch);
                    $$=strdup(cat);
                }

          | real    
              {
                strcpy(cat,"REAL-");
                strcat(cat,$1);
                $$=strdup(cat);
              }                
          | integer  
              {
                strcpy(cat,"INTEGER-");
                strcat(cat,$1);
                $$=strdup(cat);
              }                  
          | boolean  
              {
                strcpy(cat,"LOGICAL-");
                strcat(cat,$1);
                $$=strdup(cat);
              }                    
          | character  
              {
                strcpy(cat,"CHARACTER-");
                strcat(cat,$1);
                $$=strdup(cat);
              }                 
          | po EXPRESSION pf  
              {
                $$=strdup($2);
              }        
;

INDEX: idf 
        { 
          if (!idf_existe($1,"Variable") && !idf_existe($1,"Constante")) {
            printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,$1);
            printf("HELLO 5");
            YYABORT;
          }
          strcpy(typeIDF,getType($1,"Variable"));
          if(strcmp(typeIDF,"INTEGER")!=0){
            printf("\nFile '%s', line %d, character %d: semantic error : Unexpected index type '%s'.\n",file_name,nb_line,nb_character,$1);
            YYABORT;
          }

        }
     | integer 
        {
          if(atof($1)<0){
              printf("\nFile '%s', line %d, character %d: semantic error : Negative index value.\n",file_name,nb_line,nb_character);
              YYABORT;
          }
          $$=strdup($1);
        }
;

R2_1_CONTROLE: kwIF CONDITION 
              {
                deb_else=qc;
                fin_if=qc;
                remplir_quad("BNZ"," ",$2,"<vide>");
              }
;

R1_2_CONTROLE: R2_1_CONTROLE ao INST af 
              {
                fin_if=qc;
                remplir_quad("BR"," ","<vide>","<vide>");
                sprintf(i,"%d",qc); 
                mise_jr_quad(deb_else,2,i);
              }
;

R3_1_CONTROLE: kwIF EXPRESSION 
              {
                diviserChaine($2,partie1_1,partie1_2);
                if (strcmp(partie1_1,"LOGICAL")!=0 && strcmp(partie1_1,"/")!=0){
                  printf("\nFile '%s', line %d, character %d: semantic error : Unexpected expression type.\n",file_name,nb_line,nb_character);
                  YYABORT;
                }
                deb_else=qc;
                fin_if=qc;
                remplir_quad("BNZ"," ",partie1_2,"<vide>");
              }
;

R4_2_CONTROLE: R3_1_CONTROLE ao INST af
              {
                fin_if=qc;
                remplir_quad("BR"," ","<vide>","<vide>");
                sprintf(i,"%d",qc); 
                mise_jr_quad(deb_else,2,i);
              }
;

CONTROLE: R1_2_CONTROLE kwELSE ao INST af
              {
                sprintf(i,"%d",qc);
                mise_jr_quad(fin_if,2,i);
              }
        | R2_1_CONTROLE ao INST af 
              {
                sprintf(i,"%d",qc);
                mise_jr_quad(fin_if,2,i);
              }
        | R3_1_CONTROLE ao INST af
              {
                sprintf(i,"%d",qc);
                mise_jr_quad(fin_if,2,i);
              }
        | R4_2_CONTROLE kwELSE ao INST af 
              {
                sprintf(i,"%d",qc);
                mise_jr_quad(fin_if,2,i);
              }
;

CONDITION: po EXPRESSION OPCOMP EXPRESSION pf
              { 
                diviserChaine($2,partie1_1,partie1_2);
                diviserChaine($4,partie2_1,partie2_2);
                sprintf(temp,"T%d",tmp);
                if (strcmp(partie2_1,partie1_1)!=0 && strcmp(partie1_1,"/")!=0 && strcmp(partie2_1,"/")!=0) {
                  if(!((strcmp(partie1_1,"REAL")==0 && strcmp(partie2_1,"INTEGER")==0) || (strcmp(partie2_1,"REAL")==0 && strcmp(partie1_1,"INTEGER")==0))){
                    printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                    printf("HIII 13!");
                    YYABORT;
                  }
                }
                $$=strdup(temp);
                remplir_quad($3,partie1_2,partie2_2,temp);
                tmp++;
              }
         | po CONDITION  OPLOG  CONDITION pf
              {
                sprintf(temp,"T%d",tmp);
                $$=strdup(temp);
                remplir_quad($3,$2,$4,temp);
                tmp++;
              }
         | po CONDITION pf
              {
                $$=strdup($2);
              }         
;               

OPLOG: kwAND {$$=strdup($1);}
     | kwOR  {$$=strdup($1);}
;

OPCOMP: kwGT {$$=strdup($1);}
      | kwGE {$$=strdup($1);} 
      | kwEQ {$$=strdup($1);}
      | kwLE {$$=strdup($1);}
      | kwLT {$$=strdup($1);}
      | kwNE {$$=strdup($1);}
;

BOUCLECOND: kwFOR po AFFECTATION dp INDEX dp INDEX pf
            {

                deb_for = qc;

                char index_end[20];
                strcpy(index_start_for,$3);
                strcpy(index_end, $7);

                strcpy(pas,$5);

                remplir_quad("BGE", "<vide>", index_start_for, index_end);
            }
;
BOUCLE: BOUCLECOND ao INST af
            {

                remplir_quad("+", index_start_for, pas, index_start_for);
                sprintf(i, "%d", deb_for);
                remplir_quad("BR", i, "<vide>", "<vide>");
      
                sprintf(i, "%d", qc);
                mise_jr_quad(deb_for, 2, i);
            }
;

MEMBREIDF : idf                      
                { 
                  if (!idf_existe($1,"Variable") && !idf_existe($1,"Constante")) {
                    printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,$1);
                    printf("HELLO 6");
                    YYABORT;
                  }
                  $$=strdup($1);
                }
          | idf co INDEX cf 
                { 
                  if (!idf_existe($1,"Vecteur")) {
                    printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,$1);
                    printf("HELLO 7");
                    YYABORT;
                  }
                  $$=strdup($1);
                }
;

ENTREE: kwREAD po MEMBREIDF pf  
;

SORTIE: kwWRITE po MESSAGE pf 
          {
            rechercher($3,"Idf","CHARACTER","/","-1","/",3);
          }
      | kwWRITE po MEMBREIDF pf  
          {
            rechercher($3,"Idf","CHARACTER","/","-1","/",3);
          }
; 

MESSAGE: character MESSAGEIDF
          {
            strcat(tab,$1);strcat(tab,$2);
            $$=strdup(tab);
            strcpy(tab," ");
          }
       | character
          {
            $$=strdup($1);
          }
       | MEMBREIDF vg MESSAGE
          {
            strcat(tab,$1);strcat(tab,$2);strcat(tab,$3);
            $$=strdup(tab);
            strcpy(tab," ");
          }
;

MESSAGEIDF: vg MEMBREIDF vg MESSAGE
              {
                strcat(tab,$1);strcat(tab,$2);strcat(tab,$3);strcat(tab,$4);
                $$=strdup(tab);
                strcpy(tab," ");
              }
          | vg MEMBREIDF 
              {
                strcat(tab,$1);strcat(tab,$2);
                $$=strdup(tab);
                strcpy(tab," ");
              }
;


%%

int yyerror(char *msg) { 
  printf("\nFile '%s', line %d, character %d: syntax error\n",file_name,nb_line,nb_character);
  return 1; 
}

int main(int argc,char *argv[]){
  file_name=argv[1];
  initialisation();
  yyparse();
  afficher();
  affiche_quad();
  return 0;
}

int yywrap(){
  return 0;
}
