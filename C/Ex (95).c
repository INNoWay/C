#include <stdio.h>
int main ()
{
char strings [5][40];
int i;
for (i =0; i <5;i ++)
{
printf ("\n\n Digite uma frase ou palavra: ");
gets (strings[i]);
}
printf ("\n\n As frases digitadas foram as seguintes:\n\n");
for (i=0; i < 5;i ++)
printf ("%s\n",strings[i]);
system("pause");
return(0);
}
