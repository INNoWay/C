#include <stdio.h>
#include <stdlib.h>

float a, b, c; //variáveis globais

void fmedia( ){  //definição da função fmedia
  float media; //variável local
  media = (a+b+c)/3;
  printf("Media = %.2f \n ", media);
}

main( ){ // Definição da função principal - main
  printf(" Digite tres valores: ");
  scanf("%f%f%f",&a,&b,&c);
  fmedia (); // chamada da funcao fmedia
  system("PAUSE");
}
