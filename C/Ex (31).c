#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n;
  float nota,soma,media;

soma=0;
  for (n=1;n<=10;n++)
  {
  printf("entre com a nota do aluno ",n);
  scanf("%f",& nota);

soma=soma+nota;

}
media=soma/10;
printf("a media= %f\n",media);
   
  system("PAUSE");	
  return 0;
}
