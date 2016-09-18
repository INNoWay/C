#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int unidade,dezena,centena,milhar,num,resto;
    printf("entre com numero             ");
    scanf("%d", &num);
    milhar=num/1000;
    resto=num/1000;
    centena=num/100;
    resto=num/100;
    dezena=num/10;
    resto=num/10;
    unidade=resto;
    printf("milhar=%d\n",milhar);
    printf("center=%d\n",centena);
    printf("dezena=%d\n",dezena);
    printf("unidade=%d\n",unidade);
  system("PAUSE");	
  return 0;
}
