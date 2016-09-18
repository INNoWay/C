#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
float raio;
void farea(){
     float area;
     area=PI*(raio*raio);
     printf("Area=%f\n",area);
     }
void fperime(){
     float perimetro;
     perimetro=raio*(2*PI);
     printf("perimetro=%f\n",perimetro);
     }
int main (){
    printf("entre com o raio da circuferencia:");
    scanf("%f",&raio);
    farea();
    fperime();

  
  system("PAUSE");	
  return 0;
}
