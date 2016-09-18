#include "stdio.h"
#include "stdlib.h"

int Fat(int n)
{
    if (n == 1)
        return 1;
    else{
        return Fat(n-1)*n;
        }
}

main(){
    int numero;
    printf("Digite o numero do fatorial desejado: ");
    scanf("%i",&numero);
    printf("O fatorial eh: %i",Fat(numero));
    printf("\n\n");
    system("pause");
}
