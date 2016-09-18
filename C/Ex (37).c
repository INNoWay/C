#include <stdio.h>
#include <stdlib.h>
struct tdata
{
       int dia;
       int mes;
       int ano;
       };

int main(int argc, char *argv[])
{
  struct tdata dhoje,dnasc;
  int idade;
  printf("Digite a data de hoje(dia/mes/ano):");
  scanf("%d %d %d", &dhoje.dia, &dhoje.mes, &dhoje.ano);
  
  printf("Digite a data de nacimento (dia/mes/ano):");
  scanf("%d %d %d", &dhoje.dia, &dhoje.mes, &dhoje.ano);
  
  if (dhoje.mes>dnasc.mes)
     idade=dhoje.ano-dnasc.ano;
  else if (dhoje.mes==dnasc.mes && dhoje.dia>dnasc.dia)
       idade=dhoje.ano-dnasc.ano;
       else idade=dhoje.ano-dnasc.ano-1;
       printf(" Idade=%d\n",idade);
  system("PAUSE");	
  return 0;
}
