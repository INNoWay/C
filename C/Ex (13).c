#include <stdio.h>
#include <stdlib.h>
#include <math.h> //funçoes matematicas

int main(int argc, char *argv[])
{
    float x1,x2,y1,y2,d;
    printf(" Entre com Primeiro Ponto: ");
    scanf("%f%f",&x1,&y1);
    printf(" Entre com Segundo Ponto:  ");
    scanf("%f%f",&x2,&y2);
    d = pow( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)  ,0.5);
    printf("valor de distancia=%5.2f\n",d);
  system("PAUSE");	
  return 0;
}
