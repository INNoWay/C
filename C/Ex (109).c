#include <stdio.h>
#include <stdlib.h>

float a, b, c; //vari�veis globais

void fmedia( ){  //defini��o da fun��o fmedia
  float media; //vari�vel local
  media = (a+b+c)/3;
  printf("Media = %.2f \n ", media);
}

main( ){ // Defini��o da fun��o principal - main
  printf(" Digite tres valores: ");
  scanf("%f%f%f",&a,&b,&c);
  fmedia (); // chamada da funcao fmedia
  system("PAUSE");
}
