#include "stdio.h"
#include "stdlib.h"

int A[5];//variável global

void fleitura(){
    int i;
    printf(" Digite os 5 elementos inteiros: \n");
    for (i=0; i < 5; i++)
    scanf("%d", &A[i]);
}

int fsoma(){
   int soma, i;
    soma = 0;
    for (i=0; i < 5; i++)
        soma = soma + A[i];
    return soma;
}

void fimprime(){
    int i;
    printf("\nElementos do Vetor: \n");
    for (i=0; i < 5; i++)
        printf("%d \n", A[i]);
}

main(){
    fleitura();
    printf ("\nA soma geral %d \n", fsoma()); 
    fimprime();
    system("pause");
}
