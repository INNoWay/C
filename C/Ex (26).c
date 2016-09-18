#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n;
  float nota,soma,media;
n=1;
soma=0;
  while (n<=10)
  {
  printf("entre com a nota do aluno ",n);
  scanf("%f",& nota);

soma=soma+nota;
n++;
}
media=soma/10;
printf("a media= %f\n",media);
   
  system("PAUSE");	
  return 0;
}
