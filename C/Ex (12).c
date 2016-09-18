#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 float valor,moeda25,moeda10,moeda05,moeda01,resto;
 
 
 printf("entre com valor de 1 a 99           ");
 scanf("%d", &valor);
 moeda25=valor/25;
 resto=valor % 25;
 moeda10=resto/10;
 resto=resto % 10;
 moeda05=resto/5;
 resto=resto % 5;
 moeda01=resto;
 
  printf("total moeda m25=%d \n",moeda25);
  printf("total moeda m10=%d \n",moeda10);
  printf("total moeda m05=%d \n",moeda05);
  printf("total moeda m01=%d \n",moeda01);
  system("PAUSE");
  return 0;
}
