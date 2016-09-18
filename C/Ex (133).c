//Estrutura de pilha
//A ideia da pilha e inserir o novo elemento sempre no inicio 
//da lista. Como 0 0 e para saida do programa na entrada de 
//dados ele grava estes valores na pilha antes de sair
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

       plista = NULL;
        
       do{
              system("cls");
              printf("Numero do cliente: \n");
              scanf("%i",&campo_cli);
              printf("Valor do pedido: \n");
              scanf("%f",&campo_val);
       
              novo=(lista *) malloc(sizeof(lista));
       
              novo->cli=campo_cli;
              novo->valor=campo_val;
              novo->prox=NULL;
       
               if(plista==NULL)
                  plista=novo;
               else{
                   novo->prox=plista;
                   plista=novo;
                }
       }while(campo_cli!=0);
 
       dir=plista;
       while(dir!=NULL){
           printf("\n\n\nCliente: %i",dir->cli);
           printf("\nValor: %.2f",dir->valor);
           dir=dir->prox;
       }
       printf("\n\n");
       system("pause");
}
