#include <stdio.h>

int tamanho(char str[]) //f corresponde a frase
{ int i;
i=0;
while (str[i] != '\0')
{ i = i+1;
}
return i;
}
int main( )
{
char frase[50];
printf(" Digite uma frase:\n");
gets(frase);
printf(" Tamanho da frase = %d \n", tamanho(frase));
system ("pause");
return 0;
}

