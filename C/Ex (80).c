#include <stdio.h>
#include <stdlib.h>
#define tam 10
void fleitura(int v[],int n){
int i;
printf("Digite %d elementos:");
  for(i=0;i<n;i++){
  scanf("%d",&v[i]);
  }
}
int fmaior(int v[],int n){
    int maior, indmaior,i;
    maior=v[0];
    indmaior=0;
    for (i=0;i<n;i++){
        if (v[i]>maior)
        maior=v[i];
        maior=i;
        }
        return indmaior;
}
int fpar(int v[],int n){
    int i,par=0;
    for(i=0;i<n;i++)
    if(v[i]%2==0)
       par++;
    return par;
}
float fmedia(int v[],int n){
      int i;
      float soma=0, md;
      for (i=0;i<n;i++)
      soma=soma+v[i];
      md=soma/n;
      return md;
      } 
float facimamed(int v[],int n, float md){
      int i,cont=0;
      float porcent;
      for(i=0;i<n;i++)
      if(v[i]>md) cont++;
      } 
int main(int argc, char *argv[]){
    int vet[tam],n;
    float md;
    printf("Digite o numero de elemento:");
    scanf("%d",&n);
    fleitura(vet,n);
    printf("Numeros de pares:%d\n",fpar(vet,n));
    md=fmedia(vet,n);
    printf("Media:%f\n",md);
    printf("Por Contagem acima da media:%f\n",facimamed(vet,n,md));
    
  system("PAUSE");	
  return 0;
}
