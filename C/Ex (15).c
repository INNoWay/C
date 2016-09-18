#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char sexo;
    float alt, peso;
    printf("entre com sexo          ");
    sexo=getche(); //ler um caracter
    printf("Digite a altura:");
    scanf("%f",&alt);
    if(sexo=='f')
       peso=62.1 * alt - 44.7;
    else peso=72.7 * alt - 58;
    printf("peso ideal = %5.2f\n", peso);
    
  system("PAUSE");	
  return 0;
}
