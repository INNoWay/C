#include <stdio.h>
#include <stdlib.h>
int a, b; //vari�vel global
int fsoma ( ) //definicao da funcao fsoma
{
int res; //vari�vel local
res = a+b;
return res; // o valor de res est� sendo retornado (devolvido)
}
int main( ) // Defini��o da fun��o principal - main
{
int resp;
printf(" Digite dois numeros: ");
scanf("%d %d", &a, &b);
resp = fsoma(); //chamada da funcao fsoma e recebimento do valor de res retornado
printf("Soma = %d \n ", fsoma());
system("PAUSE");
return 0;
}
