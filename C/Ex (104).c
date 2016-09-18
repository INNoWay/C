#include <stdio.h>
#include <stdlib.h>

//definicao de testa_par – x é o argumento
int testa_par(int x){  
    if (x%2==0)
        return 1; //se é par, retorna 1
    else
     return 0; //caso contrario retorna 0
}

main(){
    int X;
    int resultado;
    printf("\nDigite um valor inteiro para X: ");
    scanf("%d",&X);
    //chamada – resultado recebe o retorno
    resultado=testa_par(X); 
    if (resultado==1)
        printf("\nO Numero %d eh par",X);
    else
        printf("\nO Numero %d eh impar",X);
    printf("\n\n");
    system("pause");
}
