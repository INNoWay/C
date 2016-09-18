#include <stdio.h>
#include <stdlib.h>
#define m 3
#define n 4
void fleitura(int mat[][n]){
     int i,j;
     printf("Digite %d lemento:\n",m*n);
     for(i=0;i<m;i++)
     for(j=0;j<n;j++)
     scanf("%d",&mat[i][j]);
     }
int fsoma(int mat[][n]){
    int i,j,soma;
    soma =0;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    soma=soma+a[i][j];
    return soma;
}
void fpos_menor(int [][n]){
    int i,j,menor,imen,jmen;
     imen=0;
     jmen=0;
     for(i=0;i<m;i++)
     for(j=0;j<n;j++)
     if (mat[i][j]<menor){
        menor=mat[i][j];
        imen=i;
        jmen=j;
        }
         printf("Menor elemento=%d\n",menor);
          printf("Posiçao do menor=%d\n",imen,jmen);
}
void fimprime(int mat[][n]){
    int i,j;
    printf("Matriz obitida:\n");
     for(i=0;i<m;i++){
     for(j=0;j<n;j++)
     printf("%3d",mat[i][j]);
     printf("\n");
        }

}

     
int main(int argc, char *argv[])
{
    int a[m][n];
    fleitura(a);
    printf("Soma dos elementos=%d\n",fsoma(a));
    fpos_menor(a);
    fimprime(a);
  system("PAUSE");	
  return 0;
}
