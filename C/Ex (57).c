#include <stdio.h>
#include <stdlib.h>
int testa_par(int x) //definicao de testa_par � x � o argumento
{
if ( x% 2 == 0)
return 1; //se � par, retorna 1
else
return 0; //caso contrario retorna 0
}
int main(void)
{
int X;
int resultado;
printf("\nDigite um valor inteiro para X");
scanf("%d",&X);
resultado=testa_par(X); //chamada � resultado recebe o retorno
if (resultado == 1)
printf("\nO N�mero %d � par",X);
else printf("\nO N�mero %d � impar",X);
system("PAUSE");
return 0;
}
