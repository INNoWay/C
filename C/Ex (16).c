#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float a,b,c;
  printf("entre com lado a do triangulo    ");
  scanf("%f",&a);
  printf("entre com lado b do triangulo    ");
  scanf("%f",&b);
  printf("entre com lado c do triangulo    ");
  scanf("%f",&c);
  if ((a==b)&&(b==c)&&(c==a))
  printf("triangulo equilatero");
  else if((a==b)||(b==c)||(c==a))
  printf("triangulo isoseles");
  else 
  printf("o triagulo e escaleno f\n");
  system("PAUSE");	
  return 0;
}
