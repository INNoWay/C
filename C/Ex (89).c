#include <stdio.h>
void exibe_2d_matriz(int matriz[][10], int linhas)
{
int i, j;
for (i = 0; i < linhas; i++)
for (j = 0; j < 10; j++)
printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
}
int soma_matriz(int matriz[][10], int linhas)
{
int i ,j, soma = 0;
for (i = 0; i < linhas; i++)
for (j = 0; j < 10; j++)
soma += matriz[i][j];
return(soma);
}
int main( )
{
int a[1][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
int b[2][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
{11, 12, 13, 14, 15, 16, 17, 18, 19,20}};
int c[3][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
{11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
{21, 22, 23, 24, 25, 26, 27, 28, 29, 30}};
exibe_2d_matriz(a, 1);
exibe_2d_matriz(b, 2);
exibe_2d_matriz(c, 3);
printf("Soma dos elementos da 1a matriz %d\n", soma_matriz(a, 1));
printf("Soma dos elementos da 2a matriz %d\n", soma_matriz(b, 2));
printf("Soma dos elementos da 3a matriz %d\n", soma_matriz(c, 3));
system("PAUSE");
return 0;
}
