#include <stdio.h>
#include <stdlib.h>
#define n 5
void fleitura(int v[]){
     int i;
     printf("Entre com 5 elemento:%d\n",i);
     for(i=0;i<n;i++)
     scanf("%d",&v[i]);
     }
void fimprime(int v[],int tam){
     int i;
     for(i=0;i<tam;i++)
     printf("%d:",v[i]);
     }
void finverte(int c[],int v[]){
     int i,j;
     j=n-1;
     for(i=0;i<n;i++){
     c[i]=v[j];
     j--;
     }
}
void fconcatena(int v1[], int v2[], int d[]){
     int i,j;
     for(i=0;i<n;i++)
     d[i]=v1[i];
     for(j=0;j<n;j++){
     d[i]=v2[j];
     i++;
     }
}
int main(int argc, char *argv[]){
int a[n],b[n],c[n],d[2*n];
fleitura(a);
fleitura(b);
finverte(c,a); 
printf("vetor A invertido:\n");
fimprime(c,n);
finverte(c,b);
printf("vetor B invertido:\n");
fimprime(c,n);
fconcatena(a,b,d);
printf("vetor Concatena:\n");
fimprime(d,2*n);
  system("PAUSE");	
  return 0;
}
