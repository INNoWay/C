#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ float a,b,c,media;
printf("Digite a primeira nota..      ");
scanf("%f", &a);
printf("Digite a segunda  nota..      ");
scanf("%f", &b);
printf("Digite a terceira nota..      ");
scanf("%f", &c);
media = (a+b+c)/3;

printf("nota final= %f\n",media);


  
  system("PAUSE");	
  return 0;
}
