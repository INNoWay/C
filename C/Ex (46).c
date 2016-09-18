#include <stdio.h>
#include <stdlib.h>
struct Tcarro
{
   float preco;
   int ano;
   char marca[15];
   char cor[10];
};
struct Tcarro car1,car2;
void fleitura()
{
    printf("---Dados do primeiro carro:\n");
    printf("Digite marca:\n");
    gets(car1.marca);
    printf("Digite ano:");
    scanf("%d",&car1.ano);
    printf("Digite cor:");
    printf("Digite preco:\n");
    scanf("%f",&car1.preco);
    fflush(stdin);
    gets(car1.cor);
    scanf("%d",&car1.ano);
    
    printf("---Dados do Segundo carro:\n");
    fflush(stdin);
    printf("Digite marca:\n");
    gets(car2.marca);
    printf("Digite ano:");
    scanf("%d",&car2.ano);
    printf("Digite cor:");
    printf("Digite preco:");
    scanf("%f",&car2.preco);
    fflush(stdin);
    gets(car2.cor);
    scanf("%d",&car2.ano);
    
}
void fmenorpreco()
{
      if (car1.preco < car2.preco){
       printf(" marca:%s\n",car1.marca);
       printf(" ano:%d\n",car1.ano);
       printf(" cor:%s\n",car1.cor);
       printf(" preco:%.2f\n",car1.preco);
       }
      else  {
       printf(" marca:%s\n",car2.marca);
       printf(" ano:%d\n",car2.ano);
       printf(" cor:%s\n",car2.cor);
       printf(" preco:%.2f\n",car2.preco);
       }
}   
void fano()
{
     int m_ano;
      
       printf("ano da consulta:\n");
       scanf("%d",&m_ano);
      if (car1.ano>=m_ano || car2.ano>=m_ano){
         printf("tem o carro procurado:\n");
         }
      else{ 
       printf("nao tem o carro procurado:\n");
       }
       }
void fmarca1()
{
     char marca1[15];
     printf("entre com marca do carro:\n");
     gets(marca1);
    if (car1.marca,marca1==0 || car2.marca,marca1==0){
         printf("tem o marca desejada:\n");
         }
      else{ 
       printf("nao tem marca desejada:\n");
       }
       }    
                       
int main (int argc, char *argv[])
{   
  fleitura();
  fmenorpreco();
  fano();    
  fmarca1();
    
   
   
  system("PAUSE");	
  return 0;
}
