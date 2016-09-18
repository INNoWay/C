#include <stdio.h>
#include <stdlib.h>
int fsoma1( int a1, int b1 ) //definicao da funcao fsoma1
{ // a1 e b1 são argumentos recebidos sendo cópias de a e b
int res; //variável local
res=a1+b1;
return res; // o valor de res está sendo retornado (devolvido)
}
int main( ) // Definição da função principal - main
{
int a,b;
printf(" Digite dois numeros: ");
scanf("%d %d",&a,&b);
//chamada da funcao fsoma onde a e b são parâmetros
// resp recebe o valor retornado
printf("Soma = %d \n ",fsoma1(a,b));
printf("Soma = %d \n ",fsoma1(a,b));
system("PAUSE");
return 0;
}
