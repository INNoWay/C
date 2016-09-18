#include <stdio.h>
#include <stdlib.h>
int main()
{ int i;
char nomes[][40] = {"Lulu Santos", "Zuenir Ventura", "Ana Maria Braga", "Cora Coralina"};
printf ("\n\n Os nomes iniciais foram as seguintes:\n\n");
for(i = 0; i < 4; i++)
printf("%s\n", nomes[i]);
system("PAUSE");
return 0;
}
