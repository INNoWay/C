//Estrutura de fila
//A ideia da fila é inserir o proximo elemento no final da lista
//Como 0 0 e para saída do programa na entrada de dados ele grava 
//estes valores na fila antes de sair.
//Mude o procedimento para nao gravar 0 0.

#include "stdio.h"
#include "stdlib.h"

typedef struct lista{
    int cli;
    float valor;
    struct lista *prox;
}lista;
       
lista *plista;

main(){

       int campo_cli;
       float campo_val;
       lista *novo, *dir, *esq;

       plista = NULL; //ponteiro no inicio da lista
        
       do{
              system("cls");
              printf("Numero do cliente: \n");
              scanf("%i",&campo_cli);
              printf("Valor do pedido: \n");
              scanf("%f",&campo_val);
       
              novo=(lista *) malloc(sizeof(lista)); //nova celula
       
              novo->cli=campo_cli;
              novo->valor=campo_val;
              novo->prox=NULL;
       
               if(plista==NULL) //o ponteiro esta na primeira posicao da lista
                  plista=novo; //entao a lista esta vazia e recebe o novo
               else{
                   dir=plista; //precisamos saber quem e o ultimo da lista
                   //entao a direita recebe o primeiro da lista
                   while(dir!=NULL){ //enquanto a direita for diferente de NULL
                   //quer dizer que tem mais alguem da fila
                       //entao pega a celula da esquerda e joga para a direita
                       esq=dir;                
                       //pula para o proximo a direita da lista
                       dir=dir->prox; 
                   }//esta repeticao vai acontecer ate chegar no final da fila
                   //chegando no final o ultimo que esta a esquerda recebe
                   //o endereco do novo    
                   esq->prox=novo;
                   //e o novo recebe o endereco da direita que e o final da fila
                   novo->prox=dir;
                }
       }while(campo_cli!=0);
 
       while(plista!=NULL){
           printf("\n\n\nCliente: %i",plista->cli);
           printf("\nValor: %.2f",plista->valor);
           plista=plista->prox;
       }
       system("pause");
}
