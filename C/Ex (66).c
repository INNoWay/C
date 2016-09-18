#include <stdio.h>
#include <stdlib.h>
float fsoma(int n)
{
      int i,x;
      float s=0;
      x=2;
      for(i=1;i<n;i++){
      s=s+(float)i/x;
      x=x*2;
      }
      return s;
}
int main(int argc, char *argv[])
{
    int n;
    printf("entre com valor de N: ");
    scanf("%d",&n);
    
    printf("Soma:%f\n",fsoma(n));
  system("PAUSE");	
  return 0;
}
