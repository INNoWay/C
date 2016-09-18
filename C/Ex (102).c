/* Ler duas matrizes 3X3 e em seguida soma-las armazenando em uma terceira matriz.
Imprimir na tela a matriz que armazena a soma. */

#include "stdio.h"
#include "stdlib.h"
main(){
	int m1[3][3], m2[3][3], m3[3][3], l, c;
	for(l=0; l<=2; l++){
		for(c=0; c<=2; c++){
			printf("Valor da matriz 1 linha %i coluna %i: ", l,c);
			scanf("%i",&m1[l][c]);
			printf("Valor da matriz 2 linha %i coluna %i: ", l,c);
			scanf("%i",&m2[l][c]);
			m3[l][c]=m1[l][c]+m2[l][c];
		}
	}
	for(l=0; l<=2; l++){
		for(c=0; c<=2; c++){
			printf("%i",m3[l][c]);
		}
		printf("\n");
	}
	system("pause");
}
