/*Usando Pilha
É uma lista linear onde todas as inserções, remoções e 
acessos são realizados em um único extremo. 
Este tipo de lista é denominada Last In First Out - 
último que entra, primeiro que sai.
*/

#include "stdio.h"
#include "stdlib.h"

int pilha[50]; //Variável que compoe a pilha estática.
int totalpilha=-1; //Coloca o ponteiro na posição vazia da pilha.
int temp=0;
int a;
int op;
int valor;

//Função que tem o objetivo de mostrar os componentes da pilha.
void mostrarpilha(){
    for(a=0;a<=totalpilha;a++){
        printf("%i ",pilha[a]);
    }
    printf("\n\n");
    system("pause");
}

/*A regra para pilha é inserir o elemento sempre no início 
da pilha. Como exemplo no cotidiano, lembre-se de uma pilha 
de pratos. */
int incluir(){
    if(totalpilha==50) //Quer dizer que nao ha mais espaco na pilha
        printf("Nao ha espaco na pilha\n");
    else{
      totalpilha++; //O ponteiro da pilha aumenta
      printf("Ira ser incluido % o. item da pilha.\nPara preencher a pilha faltam %i\n\n",totalpilha+1,50-totalpilha);
      printf("Entre com o numero a ser inserido:");
      scanf("%i",&valor);
      if(totalpilha!=0){
          //Aqui ele vai mudando a posicao dos elementos à direita para
          //que seja inserido o novo elemento à esquerda de todos              
          for(a=totalpilha;a>=0;a--) 
                 pilha[a]=pilha[a-1];
             //A primeira posição recebe o elemento a ser inserido 
             //no início da lista    
             pilha[0]=valor; 
         }
      else
         pilha[0]=valor; //Se a lista estiver vazia o elemento é inserido na primeira posicao sem analisar as demais posições.
         printf("\nValor na pilha inserido\n");
    }
}

//A regra para exclusao na pilha e retirar o primeiro elemento.
//Usa a mesma ideia da fila para exclusão, o primeiro da lista é excluído, fazendo com os demais ficam ao topo da pilha.
int excluir(){
    if(totalpilha==-1)
        printf("Nao ha elemento na pilha\n");
    else{
        printf("Elemento retirado da pilha\n");
        for(a=0;a<=totalpilha-1;a++){
            pilha[a]=pilha[a+1];
        }
        totalpilha--;
        printf("Elementos que restam na pilha:\n");
    }
}
                                                           
main()
{
   do{
      system("cls");   
      printf("Menu - pilha\n\n");
      printf("1 - Incluir\n");
      printf("2 - Excluir\n");
      printf("0 - Sair\n");
      printf("Opcao:");
      scanf("%i",&op);
      if(op==1){
          incluir();
          mostrarpilha();
      }
      if(op==2){
          excluir();
          mostrarpilha();
      }  
   }while(op!=0);
}
