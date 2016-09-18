#include <stdio.h>
#include <stdlib.h>

main()
{
int * pi;
double * pd;
pi=(int *)malloc(sizeof(int));
*pi = 1001; // armazena um valor lá
printf("int ");
printf("valor = %d: posicao = %d\n", *pi, pi);
pd=(double *)malloc(sizeof(double)); // aloca espaço para um double
*pd = 10000001.0; // armazena um double lá
printf("double ");
printf("valor = %g: posicao = %d\n", *pd, pd);
printf("tamanho de pi = %d", sizeof pi);
printf(": tamanho de *pi = %d\n", sizeof *pi);
printf("tamanho de pd = %d", sizeof pd);
printf(": tamanho de *pd = %d\n", sizeof *pd);
free(pi);
free(pd);
system("pause");
}
