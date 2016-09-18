#include <stdio.h>
#include <stdlib.h>
int fibo(int n){ 
    if (n < 2) {
    return n;
    } 
    else { 
         return fibo(n - 1) + fibo(n - 2);
          } 
}
int main(int argc, char *argv[]){
    int i;
  for(i = 0; i < 10; i++){ 
      printf("%d ",fibo(i));
      } 
  system("PAUSE");	
  return 0;
}

============================================================
============================================================

#include <stdio.h> 
#include <stdlib.h>
 

int main (void)
{
    float numeros[10];
    int i, aux,ii=0;
    for(i=0; i<=9;i++){
             printf("Digite o valor do indice %d: ",i);
             scanf("%f",&numeros[ii]);
             ii++;
           
             }
    for(i=0; i<=9;i++)
    
    printf("%.2f  ", numeros[i]);
 
    for (i=0; i <= 9/2; i++) {
        aux = numeros[i];
        numeros[i] = numeros[ii-i-1];
        numeros[ii-i-1] = aux;
    }
    printf("\n");
    for(i=0; i<=9;i++)
    printf("%.2f  ", numeros[i]);
    
    printf("\n");
    system("PAUSE"); 
    return 0;
}



