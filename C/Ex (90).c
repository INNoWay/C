#include <stdio.h>
#include <stdlib.h>
void imprime_mat(int matriz[][10], int linhas)
{
int i, j;
printf("\nMatriz com %d linhas: \n", linhas);
for (i = 0; i < linhas; i++)
{
for (j = 0; j < 10; j++)
printf("%3d ", matriz[i][j]);
printf("\n");
}
}
int soma_mat(int matriz[][10], int linhas)
{
int i , j, soma = 0;
for (i = 0; i < linhas; i++)
for (j = 0; j < 10; j++)
soma += matriz[i][j];
return(soma);
}
int fmaiormat(int matriz[][10],int lin){
    int i,j,maior;
    maior=matriz[0][0];
    for(i = 0;i < lin;i++)
    for(j = 0;j < 10;i++)
    if (matriz[i][j]>maior)
    maior=matriz[i][j];
    return maior;
}

int main( )
{
int a[1][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
int b[2][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
{11, 12, 13, 14, 15, 16, 17, 18, 19,20}
};
int c[3][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
{11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
{21, 22, 23, 24, 25, 26, 27, 28, 29, 30}
};
imprime_mat (a, 1);
printf("\nSoma dos elementos da 1a matriz %d\n\n", soma_mat(a, 1));
imprime_mat (b, 2);
printf("\nSoma dos elementos da 2a matriz %d\n\n", soma_mat(b,2));
imprime_mat (c, 3);
printf("\nSoma dos elementos da 3a matriz %d\n\n", soma_mat(c, 3));

system("PAUSE");
return 0;
}
