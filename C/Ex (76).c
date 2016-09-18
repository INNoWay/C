#include <stdio.h>
#include <stdlib.h>

float funcaos(int n){
      int i ,fat;
      float s=0;
      fat=1;
      for(i=1;i<=n;i++){
      fat=i*fat;
      s=s+(float)1/fat;
      }
      return s;
}
      
int main(int argc, char *argv[])
{int n;
printf("Digite o valor n:");
scanf("%d",&n);
printf("O valor da Soma: %.2f\n:",funcaos(n));  
  system("PAUSE");	
  return 0;
}
