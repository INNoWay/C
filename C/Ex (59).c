#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

float farea(float raio){
     float area;
     area=PI*(raio*raio);
     return area;
     }
float fperime(float raio){
     float perimetro;
     perimetro=raio*(2*PI);  
     return perimetro;  
     }
int main (){
    float raio;
    printf("entre com o raio da circuferencia:");
    scanf("%f",&raio);
    printf("Area=%f\n",farea(raio));
    printf("perimetro=%f\n",fperime(raio));
  
  system("PAUSE");	
  return 0;
}
