#include "stdio.h"
#include "stdlib.h"

int ordena(int n[5]){
    int a=0,troca=0,aux=0;
    if(a>b)
        return 1;
    else
        return 0;
 
    for(a=0;a<=n-1;a++){
        if(n[a]>n[a+1]){
            aux=n[a];
            n[a]=n[a+1];
            n[a+1]=aux;     
            troca=1;
        }
    }            
    if(troca!=0)
        ordena(n-1);
    for(a=0;a<=4;a++)
        printf("%i",n[a]);
}


if (a > b)
return 1;
else
return 0;
}

/* Ordenação bolha (3a. versão) */
void bolha (int n, int* v)
{
int i, j;
for (i=n-1; i>0; i--) {
int troca = 0;
for (j=0; j<i; j++)
if (compara(v[j],v[j+1])) { /* troca */
int temp = v[j];
v[j] = v[j+1];
v[j+1] = temp;
troca = 1;
}
if (troca == 0)
/* nao houve troca */
return;
}


main(){
       int vetor[5]={4,2,5,3,1};
       ordena(vetor);
       system("pause");
}
