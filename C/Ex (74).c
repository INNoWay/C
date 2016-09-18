#include <stdio.h>
#include <stdlib.h>
#define M 10
float a[M];
void fleitura(){
     int i;
     printf("Digiteos elementos:%d\n",M);
     for(i=0;i<M;i++)
     scanf("%f",&a[i]);
}
float findmaior(){
     int i,ind;
     ind=0;
     for (i=0;i<M;i++)
     if (a[i]>a[ind])
     ind=i;
     return ind;
     
} 
void fNormaliza(float m){
     int i;
     for(i=0;i<M;i++)
     a[i]=a[i]/a[ind];
}             
int main(int argc, char *argv[])
{
float m1;
fleitura();
m1=findmaior();
printf ("\n Maior: %f \n",m1);
fNormaliza(m1);

  system("PAUSE");	
  return 0;
}
