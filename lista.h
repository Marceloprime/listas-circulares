#include <stdio.h>
#include <stdlib.h>


//Tipo de dado
typedef struct{
    int num;
    char word;
}ELEM;

//Estrutura de um no da lista
typedef struct no{
    ELEM infor;
    struct no *ant;
    struct no *prox;
}NO;

//Estrutura da lista 
typedef struct{
    NO *inicio,*fim;
}LISTA;

///Assinaturas das funcoes///
LISTA *cria_lista();
void libera(LISTA *l);
int lista_vazia(LISTA *l);

//Funcoes de insercoes
int insere_no_inicio(LISTA *l, ELEM x);
int insercao_ordenada(LISTA *l, ELEM x);
int insere_no_final(LISTA *l,ELEM x);

//Demais Funcoes
int remocao(LISTA *l,ELEM x);
void impressao(LISTA *l,int qtd);
int quantidade(LISTA *l);
