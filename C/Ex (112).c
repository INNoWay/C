#include <stdio.h>
#include <stdlib.h>

int a, b; //variáveis globais

void fsoma( ){ //definicao da função fsoma
  int res; //variável local
  res = a+b;
  printf("Soma = %d \n ", res);
}

main( ){ // Definição da função principal - main
  printf(" Digite dois numeros: ");
  scanf("%d %d", &a, &b);
  fsoma(); // chamada da funcao fsoma
  printf("\n");
  system("PAUSE");
}
