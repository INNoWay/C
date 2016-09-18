#include <stdio.h>
#include <stdlib.h>
#define m 3

void fleitura(int mat[][m]){
     int i,j;
     printf("Digite %d elementos:\n",m*m);
     for(i=0;i<m;i++)
          for(j=0;j<m;j++)
          scanf("%d",&mat[i][j]);
          }
int fsomadprint(int mat[][m]){
    int i,soma=0;
    for(i=0;i<m;i++)
    soma=soma+mat[i][i];
    return soma;
}
int fsomadsec(int mat[][m]){
    int i,j,soma=0;
    j=m-1;
    for(i=0;i<m;i++)
    {soma=soma+mat[i][j];
    j--;
}
return soma;
}
void fcopiadiagprin (int mat[][m],int v[]){
    int i;
    for(i=0;i<m;i++)
    v[i]=mat[i][i];
}
void fcopiatransp(int mat[][m],int matt[][m]){
     int i,j;
     for(i=0;i<m;i++)
     for(j=0;j<m;j++)
     matt[j][i]=mat[i][j];
     }
void fimprimemat(int mat[][m]){
     int i,j;
    printf("Matriz obitida:\n");
     for(i=0;i<m;i++){
     for(j=0;j<m;j++)
     printf("%3d",mat[i][j]);
     printf("\n");
        }

}  
int main(int argc, char *argv[])
{int a[m][m],t[m][m],vet[m];
fleitura(a);
printf("soma dos elementos da diagonal principal=%d\n",fsomadprint(a));
printf("soma dos elementos da diagonal secundaria=%d\n",fsomadsec(a));
fcopiadiagprin(a,vet);
fcopiatransp(a,t);
fimprimemat(t);
  
  system("PAUSE");	
  return 0;
}
