#include <stdio.h>
#include <stdlib.h>

int a,b,x;
void fleitura(){
b=a;
a=x;
printf("O valor de A:%d\n",a);
printf("O valor de B:%d\n",b); 
}
int main(int argc, char *argv[])
{
fleitura();
printf("entre com valor de A: ");
scanf("%d",&a);
printf("Entre com valor de B: "); 
scanf("%d",&x);
fleitura(); 

  system("PAUSE");	
  return 0;
}
