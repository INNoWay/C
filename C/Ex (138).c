#include "stdio.h"
#include "stdlib.h"

int fila1[5];
int fila2[5];
int totalfila1=-1;
int totalfila2=-1;
int i;
int op;

void mostrarfila1(){
    for(i=0;i<=totalfila1;i++){
        printf("%i ",fila1[i]);
    }   
    printf("\n");
    printf("\nPresione enter para voltar ao Menu!!");
    printf("\n\n");
    system("pause");
}
void mostrarfila2(){   
    for(i=0;i<=totalfila2;i++){
        printf("%i ",fila2[i]);
    }
    printf("\n");
    printf("\nPresione enter para voltar ao Menu!!");
    printf("\n\n");
    system("pause");
}

int incluir1(){
    if(totalfila1==5)
        printf("Nao ha espaco na fila 1\n");
    else{
         totalfila1++;
         printf("Vai ser inserido o item % o na fila 1\n\nPara preencher a fila 1 faltam %i Elemento\n\n",totalfila1+1,5-totalfila1);
         printf("Entre com o numero a ser inserido: ");
         scanf("%i",&fila1[totalfila1]);  
		 printf("\n\n");   
	     printf("Fila 1: ");   
         mostrarfila1();         
    }
}
int incluir2(){
    if(totalfila2==5)
        printf("Nao ha espaco na fila 1\n");
    else{
         totalfila2++;
         printf("Vai ser inserido o item % o na fila 2\n\nPara preencher a fila 2 faltam %i Elemento\n\n",totalfila2+1,5-totalfila2);
         printf("Entre com o numero a ser inserido: ");
         scanf("%i",&fila2[totalfila2]); 
		 printf("\n\n");   
	     printf("Fila 2: ");                
         mostrarfila2();         
    }
}

int excluir1(){
    if(totalfila1==-1)
        printf("Nao ha elemento na fila 1\n");
    else{
        printf("O Elemento foi retirado da fila 1\n");
        for(i=0;i<=totalfila1-1;i++){
            fila1[i]=fila1[i+1];
        }
        totalfila1--;
    }
    printf("\n"); 
    printf("Fila 1: ");
    mostrarfila1();
}
int excluir2(){
    if(totalfila2==-1)
        printf("\nNao ha elemento na fila 2\n");
    else{ 
        printf("O Elemento foi retirado da fila 2\n");
        for(i=0;i<=totalfila2-1;i++){
            fila2[i]=fila2[i+1];
        }
        totalfila2--;
    }
    printf("\n"); 
    printf("Fila 2: ");
    mostrarfila2();
}
void mostrafila(){
	printf("Fila 1: ");
	for(i=0;i<=totalfila1;i++){
    printf("%i ",fila1[i]);
    }
    printf("\n\n"); 
    printf("Fila 2: ");
    for(i=0;i<=totalfila2;i++){
    printf("%i ",fila2[i]);
    }    
    printf("\n");
    printf("\nPresione enter para voltar ao Menu!!");
    printf("\n\n");
    system("pause");
}
void combinafila(){
	
   	 	printf("Filas combinadas: ");
     	for(i=0;i<=totalfila1;i++){
    	printf("%i ",fila1[i]);
    	}
    	for(i=0;i<=totalfila2;i++){    		
    	printf("%i ",fila2[i]);
    	}
    	printf("\n");
    	printf("\nPresione enter para voltar ao Menu!!");
        printf("\n\n");
    	system("pause"); 
}
                                                           
main()
{
   do{
      system("cls");   
      printf(" Menu - Fila\n\n");
      printf(" 1 - Incluir na Fila 1\n");
      printf(" 2 - Incluir na Fila 2\n");
      printf(" 3 - Excluir da Fila 1\n");
      printf(" 4 - Excluir da Fila 2\n");
      printf(" 5 - Exibe Elementos das Filas \n");
      printf(" 6 - Combina as Filas\n");
      printf(" 0 - Sair\n");
      printf("\n Opcao: ");
      scanf("%i",&op);
      printf("\n");
      if(op==1)
          incluir1();
      if(op==2)
          incluir2();
      if(op==3)
          excluir1();
	  if(op==4)
          excluir2();
      if(op==5)
          mostrafila();
      if(op==6)
          combinafila();
   }while(op!=0);
}