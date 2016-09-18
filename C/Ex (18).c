#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a,b,c,d,x1,x2;
    printf("entre com valor a   ");
    scanf("%f",&a);
    printf("entre com valor b   ");
    scanf("%f",&b);
    printf("entre com valor c   ");
    scanf("%f",&c);
    d=pow(b,2)-4*a*c;
    x1=(-b+pow(d,0.5))/2*a;
    x2=(-b-pow(d,0.5))/2*a;
    printf("delta e=%5.2f\n",x1);
    printf("delta e=%5.2f\n",x2);
  
  system("PAUSE");	
  return 0;
}
