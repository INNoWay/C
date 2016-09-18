#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int cont =0;
  printf("Digite uma frase:\n");
  while (getche () != '\r')
        cont++;
  printf ("\n O numero de caracteres eh %d\n",cont); 
  system("PAUSE");	
  return 0;
}
