#define FMISC 1

//
#ifndef FTYPES // garante que types.h não seja reincluída
  #include "types.h"
#endif

int cabecalho(tp_table *, int );
int drawline(tp_buffer *, tp_table *, struct fs_objects, int , int);
void help();
void contr();
int objcmp(char *, char *);
void strcpylower(char *, char *);
void strncpylower(char *, char *, int);
/* ----------------------------------------------------------------------------------------------
    Objetivo:   Verifica se o nome da tabela 'nomeTabela' está nos primeiros bytes de 'linha'
    Parametros: Nome da tabela, char linha.
    Retorno:    INT(1 - Está contido, 0 - Não está)
   ---------------------------------------------------------------------------------------------*/
int TrocaArquivosObj(char *nomeTabela, char *linha);
///
int pot10(int );

int strtam(char []);

int convertI(char []);

double get_decimal(char []);

double get_inteiro(char []);

double convertD(char c[]);

void clear();


// Funçoes para log
void logFile();

int logStart();

int logWrite(column *c,char *nome);


//Aux function to put | at the end of log
void logCommit(int commited);

//Função para rodar na inicialização do banco, caso tenha tido rollback, fazer alteracoes necessarias
int commit();

//Free columns memory
void freeColumns(column *head);

//print columns
void printColumns(column *head);

//Add column
void addColumn(column **head, column *newCol);

//Create column struct
column *createColumn(char type, const char *nomeCampo, const char *valorCampo);