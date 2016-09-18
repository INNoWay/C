#include <stdio.h>
#include <stdlib.h>
#define tam 10
void fleitura(int v[],int n){
     int i;
     printf("Digite %d elementos:");
        for(i=0;i<tam;i++){
        scanf("%d",&v[i]);
  }
}
void fmenor(int v[]){
     int menor;
     menor=v[0];
     for(i=1;i<n;i++){
        if(v[i]<menor) 
        menor=v[i];
        }
        return menor;
}
void fsomaimp(int v[] int b[]){
     int i;
     for(i=0;i<tam;i++)
        if(v[i]%2==1) 
        b[i]=v[i]+1;
        else b[i]=v[i];
}
int fmaiorsoma(int v[]){
     int i,maiorsoma;
     maiorsoma=v[0]+v[1];
     for(i=1;i<tam-1;i++)
        if(v[i]+v[i+1]>maiorsoma) 
        maiorsoma=v[i]+v[i+1];
        return meiorsoma;
}

int main(int argc, char *argv[]){
    int a[tam],b[tam];
    fleitura(a);
    printf("maior soma de dupla:%d\n",fmaiorsoma(a));
    fsomaimp(a,b);
    fimprime(b);
  system("PAUSE");	
  return 0;
}
