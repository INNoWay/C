#include <stdio.h>
#include <stdlib.h>

// definição de quadrado - argumento x1 (copia de x)
void quadrado (int x1){ 
    int res;
    res = x1*x1;
    printf ("Quadrado = % d", res);
}

main(){
    int x = 3;
    quadrado(x); // chamada da função quadrado com parâmetro x
    printf("\n");
    system("pause");
}
