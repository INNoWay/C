#include <stdio.h>
#include <stdlib.h>

int fsoma1 ( int a1, int b1 ){ //definicao da funcao fsoma1
    // a1 e b1 s�o argumentos recebidos sendo c�pias de a e b
    int res; //vari�vel local
    res = a1+b1;
    // o valor de res est� sendo retornado (devolvido)
    return res; 
}

main( ){ // Defini��o da fun��o principal - main
    int a, b; // a e b s�o vari�veis locais
    printf("Digite dois numeros: ");
    scanf("%d%d",&a,&b);
    //chamada da funcao fsoma onde a e b s�o par�metros
    printf("Soma = %d \n ", fsoma1(a, b));
    system("pause");
}
