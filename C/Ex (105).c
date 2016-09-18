#include <stdio.h>
#include <stdlib.h>

int fsoma1 ( int a1, int b1 ){ //definicao da funcao fsoma1
    // a1 e b1 são argumentos recebidos sendo cópias de a e b
    int res; //variável local
    res = a1+b1;
    // o valor de res está sendo retornado (devolvido)
    return res; 
}

main( ){ // Definição da função principal - main
    int a, b; // a e b são variáveis locais
    printf("Digite dois numeros: ");
    scanf("%d%d",&a,&b);
    //chamada da funcao fsoma onde a e b são parâmetros
    printf("Soma = %d \n ", fsoma1(a, b));
    system("pause");
}
