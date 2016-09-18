#include "stdio.h"
#include "stdlib.h"

int fila[50];
int totalfila=-1;
int a;
int op;

void mostrarfila(){
    for(a=0;a<=totalfila;a++){
        printf("%i ",fila[a]);
    }
    printf("\n");
    system("pause");
}

int incluir(){
    if(totalfila==50)
        printf("Nao ha espaco na fila\n");
    else{
         totalfila++;
         printf("Ira ser incluido % o. item da fila.\nPara preencher a fila faltam %i\n\n",totalfila+1,50-totalfila);
         printf("Entre com o numero a ser inserido:");
         scanf("%i",&fila[totalfila]);
         printf("\nValor na fila inserido\n");
         mostrarfila();
    }
}

int excluir(){
    if(totalfila==-1)
        printf("Nao ha elemento na fila\n");
    else{
        printf("Elemento retirado da fila\n");
        for(a=0;a<=totalfila-1;a++){
            fila[a]=fila[a+1];
        }
        totalfila--;
        printf("Elementos que restam na fila:\n");
    }
    mostrarfila();
}
                                                           
main()
{
   do{
      system("cls");   
      printf("Menu - Fila\n\n");
      printf("1 - Incluir\n");
      printf("2 - Excluir\n");
      printf("0 - Sair\n");
      printf("Opcao:");
      scanf("%i",&op);
      if(op==1)
          incluir();
      if(op==2)
          excluir();
   }while(op!=0);
}
