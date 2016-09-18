
#include <stdio.h>
#include <stdlib.h>


int main( )
{
int num, soma;
soma = 0;

for (num=1; num< 10;num++)
{
soma = soma + num;
printf ("Numero = %d \n",num);
}
printf ("Soma = %d \n", soma);
system("PAUSE");
return 0;
}
