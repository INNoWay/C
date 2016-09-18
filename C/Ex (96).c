#include <stdio.h>
void duplica(char s1[], char s2[]) //s1 corresponde a frase1
//s2 corresponde a frase2
{ int i;
i=0;
while (s1[i] != '\0')
{
s2[i] = s1[i];
i = i+1;
}
s2[i] = '\0'; //coloca final de string
}
int main( )
{
char frase1[50], frase2[50];
printf(" Digite uma frase:\n");
gets(frase1);
duplica(frase1, frase2) ;
printf(" Frase 2 = \n");
puts(frase2);
system ("pause");
return 0;
}
