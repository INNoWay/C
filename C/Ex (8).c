#include <stdio.h>
#include <stdlib.h>

float main(int argc, char *argv[])
{
  float n,conta,total,comisao;
  printf("entre com numero de pessoas       ");
  scanf("%f",&n);
  conta=n*20;
  comisao=conta*0.10;
  total=conta+comisao;
  printf("comisao e = %5.2f\n",comisao);
  printf("total e = %5.2f\n",total);
  
  system("PAUSE");	
  return 0;
}
