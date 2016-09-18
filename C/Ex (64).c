#include <stdio.h>
#include <stdlib.h>
       struct tcarro 
            { //definiçao
            char marca[15];
            int ano;
            float preco;
            };
       struct tcarro car1,car2; //declaraçao
       void fleitura()
            {
            printf("Dados do primeiro carro:\n");
            printf("Digite marca:");
            fflush(stdin);gets (car1.marca);
            printf("Digite ano:");
            scanf("%d",&car1.ano);
            printf("Digite preco:");
            scanf("%f",&car1.preco);
            
            printf("Dados do segundo carro:\n");
            printf("Digite marca:");
            fflush(stdin);gets (car2.marca);
            printf("Digite ano:");
            scanf("%d",&car2.ano);
            printf("Digite preco:");
            scanf("%f",&car2.preco);
            }
       void fmaisbarato()
            {
              if (car1.preco<car2.preco){
              printf(" O carro mais barato:%s\n",car1.marca);
              }
              else{ printf(" O carro mais barato:%s\n",car2.marca);
              }
            }
       void fconsultaAno(){
       int ano1;
       printf("Digite ano desejado:");
       scanf("%d",&ano1);
            if (car1.ano>=ano1||car2.ano>=ano1){
               printf(" Tem o carro:\n");
               }
               else { printf(" Nao Tem o carro\n");
               }
            }
       void fconsultaMarca(){
       char marca1[15];
       printf("Digite marca desejado:");
       fflush(stdin),gets(marca1);
            if (strcmp (car1.marca,marca1)==0 || strcmp (car2.marca,marca1)==0){
               printf(" Tem o carro dessa marca:\n");
               }
               else { printf(" Nao Tem o carro dessa marca:\n");
               }
               }
int main(int argc, char *argv[])
{
    fleitura();
    fmaisbarato();
    fconsultaAno();
    fconsultaMarca();
  system("PAUSE");	
  return 0;
}
