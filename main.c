/*                                  Lista duplamente encadeadas                                                       
Autor: Marcelo Augusto dos Reis 30/Nov/2018  Universidade de Sao Paulo -Sao Carlos SP - BRASIL                        */

/*Descricao:
    Esse programa consiste em uma aplicacao do conceito de estrutura de dado do tipo lista duplamente encadeada, onde eh apresentado
as tres formas de insercao, e as funcoes comuns a essa estrutura.    
*/

#include "lista.h"
#include <stdio.h>
#include <time.h>

int main(){
    //Principais declaracoes de variaveis e inicianilacoes
    LISTA *l;
    ELEM x;
    l = cria_lista();
    int opcao = 0;
    
    ///Menu de opcoes
    printf("Digite:\n");
    printf("1 para Lista com insercao inicio\n");
    printf("2 para Lista com insercao ordenada\n");
    printf("3 para Lista com insercao Fim\n");
    printf("4 para impressao\n");
    printf("5 para quantidade\n");
    printf("6 para libera Lista\n");
    printf("7 para remocao\n");
    printf("8 para sai\n");
    
    /*Uma opcao eh dada pelo usuario em seguida entra no laco de repeticao
    while,e enquanto a opcao que for seleciona for diferente de 8 ele continua no while*/
    scanf("%d",&opcao);
    while(opcao != 8){
        if(opcao == 1){
            //Eh usado a estrutura For, para que o tipo de dado possa ser atualizado
            //e inserido na lista
            printf("insercao no inicio\n");
            for(int i=0;i<10;i++){
                x.num = i;
                x.word = i+65;
                insere_no_inicio(l,x);
            }
        }

        else if(opcao == 2){
            printf("insercao ordenada\n");
            for(int i=0;i<7;i++){
                x.num = i + (rand()%50);
                x.word = i+65;
                insercao_ordenada(l,x);
            }
        }

        else if(opcao == 3){
            printf("insercao fim\n");
            for(int i=0;i<10;i++){
                x.num = i;
                x.word = i+65;
                insere_no_final(l,x);
            }
        }

        else if(opcao == 4){
            printf("impressao\n");
            impressao(l,25);
        }

        else if(opcao == 5){
            printf("Quantidade de elementos: %d\n",quantidade(l));
        }

        else if(opcao == 6){
            printf("libera Lista\n");
            libera(l);
            l = cria_lista();
        }

        else if(opcao == 7){
            printf("remocao\n");
            for(int i=0;i<25;i++){
                x.num = (i%5);
                x.word = (i%5)+65;
                remocao(l,x);
            }
        }

        printf("Nova opcao:\n");
        scanf("%d",&opcao);
    }

    libera(l);
    return 0;
}
