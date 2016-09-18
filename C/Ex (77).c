#include <stdio.h>
#include <stdlib.h>

float funcao(int n, float x){
      int i,a,b;
      float s=0;
      a=1,b=1;
      for(i=1;i<=n;i++){
      s=s+a*x/b;
      a=a+2;
      b=b*2;
      }
      return s;
}
      
int main(int argc, char *argv[])
{
    int n;
    float x;
    printf("Digite o valor de (n) e o valor de (x):");
    scanf("%d %f",&n,&x);
    printf("O valor da soma:%f\n:",funcao(n,x));
  
  system("PAUSE");	
  return 0;
}
