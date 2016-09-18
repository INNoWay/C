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
int fpareslin(int mat[][m],int l){
      int i,j;
      int par=0;
          for(j=0;j<m;j++)
          if (mat[l][j]%2==0)
          par++;
          return par;
          }
int fzerocol(int mat[][m],int c){
      int i;
      int par=0;
          for(i=0;i<m;i++)
          if (mat[i][c]==0)
          par++;
          return par;
          }
int main(int argc, char *argv[])
{int a[m][m],vet1[m],vet2[m],l,c,l1,l2;
fleitura(a);
printf("Entre com numero de linha para saber o numero de pares: ");
scanf("%d",&l);
printf("Numeros de pares=%d\n",fpareslin(a,l));
printf("Entre com numero de coluna para saber o numero de zero: ");
scanf("%d",&c);
printf("Numeros de zero=%d\n",fzerocol(a,c));
  
  system("PAUSE");	
  return 0;
}
