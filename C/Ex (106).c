#include <stdio.h>
#include <stdlib.h>

int a, b; //variáveis globais
int fsoma ( ){ //definicao da função fsoma
  int res; //variável local
  res = a+b;
  return res; //o valor de res está sendo retornado (devolvido)
}
main( ){ // Definição da função principal - main
  int resp;
  printf(" Digite dois numeros: ");
  scanf("%d %d", &a, &b);
  /* chamada da funcao fsoma e recebimento do valor de 
  res retornado*/
  resp = fsoma(); 
  printf("Soma = %d \n ", resp);
  system("PAUSE");
}
