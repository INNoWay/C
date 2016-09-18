#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, resp;
  printf("Digite um valor : ");
  scanf("%d", &a);
  printf("Digite um valor : ");
  scanf("%d", &b);
  resp = a + b;
  printf(" soma =   %d\n", resp);
  resp = a - b;
  printf(" subtracao =  %d\n", resp);
  resp = a * b;
  printf(" multiplicacao =   %d\n", resp);
  resp = a % b;
  printf(" resto =   %d\n", resp);
  resp = a / b;
  printf(" divisao =   %d\n", resp);
  system("PAUSE");	
  return 0;
}
