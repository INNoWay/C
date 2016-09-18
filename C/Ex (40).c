#include <stdio.h>
#include <stdlib.h>
int a, b; //variável global
void fsoma ( ) //definicao da funcao fsoma
{
int res; //variável local
res = a+b;
printf("Soma = %d \n ", res);
}

int main( ) // Definição da função principal - main
{
printf(" Digite dois numeros: ");
scanf("%d %d", &a, &b);
fsoma(); // chamada da funcao fsoma

printf("\n");
system("PAUSE");
return 0;
}
