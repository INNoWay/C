#include <stdio.h>
#include <stdlib.h>
void hello( ) //aqui come�a a definicao da funcao hello()
{ printf("Hello !!! Estamos na funcao \n \n"); //imprime uma frase
}
int main( ) // aqui come�a a definicao da funcao main
{
hello(); // chamada -> executa o que esta dentro de hello
printf("Estamos no main( ) ! \n \n "); //imprime uma frase
hello();
system("PAUSE");
return 0;
}
