#include <stdio.h>
#include <stdlib.h>
float a, b, c; //vari�vel global
void fleitura()
{ printf(" Digite tres valores: ");
scanf("%f %f %f", &a, &b, &c);
}
void fmedia ( ) //definicao da funcao fmedia
{
float media; //vari�vel local
media = (a+b +c)/3;
printf("Media = %f \n ", media);
}
int main( ) // Defini��o da fun��o principal - main
{
fleitura();
fmedia (); // chamada d6a funcao fmedia
fleitura();//fazendo outra fun�ao
fmedia ();  // chamada d6a funcao fmedia
system("PAUSE");
return 0;
}
