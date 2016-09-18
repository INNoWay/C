#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float salario,inss,ir,associ,liquido;
  printf("entre com salario            ");
  scanf("%f", &salario);
  inss=0.10*salario;
  ir=0.25*salario;
  associ=0.05*salario;
  liquido=salario-inss-ir-associ;
  
  
 
  printf("valor total liquido = %f\n",liquido);
  
  
  
  
  system("PAUSE");	
  return 0;
}
