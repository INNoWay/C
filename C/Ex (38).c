#include <stdio.h>
#include <stdlib.h>
struct Tcarro{
   float preco;
   int ano;
   char marca[15];
   char cor[10];
};
int main(int argc, char *argv[])
{
    struct Tcarro car1,car2;
    int anocar;
    char nomecar[15];
    
    printf("---Dados do primeiro carro:\n");
    printf("Digite marca:\n");
    gets(car1.marca);
    printf("Digite ano:");
    scanf("%d",&car1.ano);
    printf("Digite cor:");
    gets(car1.cor);
    scanf("%d",&car1.ano);
    fflush(stdin);
    printf("Digite preco:\n");
    scanf("%f",&car1.preco);
    
    printf("---Dados do Segundo carro:\n");
    fflush(stdin);
    printf("Digite marca:\n");
    gets(car2.marca);
    printf("Digite ano:");
    scanf("%d",&car2.ano);
    printf("Digite cor:");
    gets(car2.cor);
    scanf("%d",&car2.ano);
      fflush(stdin);
    printf("Digite preco:");
    scanf("%f",&car2.preco);
    
    if (car1.preco < car2.preco){
       printf(" marca:%s\n",car1.marca);
       printf(" ano:%d\n",car1.ano);
       printf(" cor:%s\n",car1.cor);
       printf(" preco:%.2f\n",car1.preco);
       }
    else {
       printf(" marca:%s\n",car2.marca);
       printf(" ano:%d\n",car2.ano);
       printf(" cor:%s\n",car2.cor);
       printf(" preco:%.2f\n",car2.preco);
       }
       
       
       
       
  system("PAUSE");	
  return 0;
}
