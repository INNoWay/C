#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
float raio;
float farea(){
     float area;
     area=PI*(raio*raio);
     return area;
     }
float fperime(){
     float perimetro;
     perimetro=raio*(2*PI);  
     return perimetro;  
     }
int main (){
    float a,b;
    printf("entre com o raio da circuferencia:");
    scanf("%f",&raio);
    a=farea();
    b=fperime();
    printf("Area=%f\n",a);
    printf("perimetro=%f\n",b);
  
  system("PAUSE");	
  return 0;
}
