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
float fmaior(){
     int i;
     float m;
     m=a[0];
     for (i=0;i<M;i++)
     if (a[i]>m)
     m=a[i];
     return m;
     
} 
void fimprime(){
     int i;
     printf("O vetor Normalizado:\n");
     for(i=0;i<M;i++)
     printf("%f",a[i]);
}  
void fNormaliza(float m){
     int i;
     for(i=0;i<M;i++)
     a[i]=a[i]/m;
}             
int main(int argc, char *argv[])
{
float m1;
fleitura();
m1=fmaior();
printf ("\n Maior: %f \n",m1);
fNormaliza(m1);
fimprime(); 

  system("PAUSE");	
  return 0;
}
