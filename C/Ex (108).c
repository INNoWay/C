#include <stdio.h>
#include <stdlib.h>
void hello( ) { 
     printf("Hello !!! Estamos na funcao \n \n");
}
main( ){ // aqui come�a a definicao da funcao main
    hello(); // chamada -> executa o que esta dentro de hello
    printf("Estamos no main( ) ! \n \n "); //imprime uma frase
    system("PAUSE");
}
