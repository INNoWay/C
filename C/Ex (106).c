#include <stdio.h>
#include <stdlib.h>

int a, b; //vari�veis globais
int fsoma ( ){ //definicao da fun��o fsoma
  int res; //vari�vel local
  res = a+b;
  return res; //o valor de res est� sendo retornado (devolvido)
}
main( ){ // Defini��o da fun��o principal - main
  int resp;
  printf(" Digite dois numeros: ");
  scanf("%d %d", &a, &b);
  /* chamada da funcao fsoma e recebimento do valor de 
  res retornado*/
  resp = fsoma(); 
  printf("Soma = %d \n ", resp);
  system("PAUSE");
}
