#include <stdio.h>
#include <stdlib.h>
float fsoma(int n,float x)
{
      int i;
      float s=0,y;
      y=x;
      for(i=1;i<n;i++){
      s=s+(float)y/i;
      y=y*2;
      }
      return s;
}
int main(int argc, char *argv[])
{
    int n;
    float x;
    printf("entre com valor de N: ");
    scanf("%d",&n);
    printf("entre com valor de X: ");
    scanf("%f",&x);
    
    
    printf("Soma:%f\n",fsoma(n,x));
  system("PAUSE");	
  return 0;
}
