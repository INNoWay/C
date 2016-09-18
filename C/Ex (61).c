#include <stdio.h>
#include <stdlib.h>
float fpotencia(float x,int y){
      float Fpot;
      Fpot=x*y;
      return Fpot;
      }
int main (){
float x;
int y;
printf("\n Digite um valor para base:");
scanf("%f",&x);
printf("\n Digite um valor do expoente:");
scanf("%d",&y);
printf("\n Resultado:%f\n", fpotencia(x,y));

  system("PAUSE");	
  return 0;
}
