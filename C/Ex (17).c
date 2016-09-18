#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float media,n,f,faltas;
  printf("entre com a nota do exame     ");
  scanf("%f",&n);
  printf("entre com numero de faltas    ");
  scanf("%f",&f);
  media=n;
  faltas=f;
  if ((media>=7)&&(faltas<=36))
  printf("aluno aprovado");
  else if ((media>40)||(media<7))
  printf("exame final");
  else 
  printf("reprovado");
  
  system("PAUSE");	
  return 0;
}
