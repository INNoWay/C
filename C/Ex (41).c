#include <stdio.h>
#include <stdlib.h>
float a, b, c; //variável global
void fleitura()
{ printf(" Digite tres valores: ");
scanf("%f %f %f", &a, &b, &c);
}
void fmedia ( ) //definicao da funcao fmedia
{
float media; //variável local
media = (a+b +c)/3;
printf("Media = %f \n ", media);
}
int main( ) // Definição da função principal - main
{
fleitura();
fmedia (); // chamada d6a funcao fmedia
fleitura();//fazendo outra funçao
fmedia ();  // chamada d6a funcao fmedia
system("PAUSE");
return 0;
}
