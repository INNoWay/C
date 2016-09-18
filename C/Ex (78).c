#include <stdio.h>
#include <stdlib.h>

float fsenx(float x){
      int i,aux,den;
      float senx=0,num;
      num=x;
      den=1;
      aux=1;
      for(i=1;i<=5;i++){
      senx=senx+num/den;
      num=num*x*x*(-1);
      aux=aux+2;
      den=aux*(aux-1)*den;
      }
      return senx;
}     

int main(int argc, char *argv[])
{
    float x;
    printf("Digite o valor de (x):");
    scanf("%f",&x);
    printf("O valor da soma:%f\n:",fsenx(x));
  
  system("PAUSE");	
  return 0;
}
