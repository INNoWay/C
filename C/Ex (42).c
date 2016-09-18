#include <stdio.h>
#include <stdlib.h>
int a,b;
void fdivide()
{
int a,b;
soma= (a/b);
printf("divisao %d\n", soma);
}
void fsub()
{
int a,b;
soma = (a-b);
printf("subtracao %d\n", soma);
}
void fmult()
{
int a,b;
soma = (a*b);
printf("multiplicacao %d\n", soma);
}
int main( ) // Definição da função principal - main
{
fdivide();
fsub();
fmult();
system("PAUSE");
return 0;
}
