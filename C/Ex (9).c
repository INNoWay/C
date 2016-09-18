#include <stdio.h>
#include <stdlib.h>

float main(int argc, char *argv[])
{
  float soma;
  int n1,n2,n3,n4,n5,n6;
  printf("entre com moeda 1 real        ");
  scanf("%d", &n1);
  printf("entre com moeda 50 centavos   ");
  scanf("%d", &n2);
  printf("entre com moeda 25 centavos   ");
  scanf("%d", &n3);
  printf("entre com moeda 10 centavos   ");
  scanf("%d", &n4);
  printf("entre com moeda 5 centavos    ");
  scanf("%d", &n5);
  printf("entre com moeda 1 centavos    "); 
  scanf("%d", &n6);
  
  
  soma=n1+1.00*n2+0.50*n3+0.25*n4+0.10*n5+0.05*n6+0.01;
  printf("total e=%5.2f\n",soma);
  
  
  
  
  system("PAUSE");	
  return 0;
}
