#include <stdio.h>
#include <stdlib.h>

int a, b; //vari�veis globais

void fsoma( ){ //definicao da fun��o fsoma
  int res; //vari�vel local
  res = a+b;
  printf("Soma = %d \n ", res);
}

main( ){ // Defini��o da fun��o principal - main
  printf(" Digite dois numeros: ");
  scanf("%d %d", &a, &b);
  fsoma(); // chamada da funcao fsoma
  printf("\n");
  system("PAUSE");
}
