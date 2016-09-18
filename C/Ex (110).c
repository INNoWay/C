#include "stdio.h"
#include "stdlib.h"

int multiplicar (int A, int B){
    if (B==0)
        return 0;
    else
        return(A + multiplicar (A, B-1));
}

main(){
	int a,b;
	printf("Entre com os numeros para multiplicar:");
	scanf("%i%i",&a,&b);
	printf("%i",multiplicar(a,b));
    system("pause");
}
