#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159
int main(int argc, char *argv[])
{
    float v,a,r;
    
    printf("entre com a raio da area    ");
    scanf("%f",&r);
    
    v = 4*pi*pow(r,3)/3;
    a = 4*pi*pow(r,2);
    
    printf("volume =%5.2f\n",v);
    printf("area =%5.2f\n",a);
    
    
    
    
  
  system("PAUSE");	
  return 0;
}
