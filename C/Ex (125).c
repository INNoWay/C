#include <stdio.h>
#include <stdlib.h>
#include <string.h> // declara strlen(), strcpy()

main()
{
char animal[20] = "urso"; // animal armazena urso
const char * passaro = "canario"; // passaro armazena endereço da
// string
char * ps; // não inicializado
printf("%s e ", animal); // mostra urso
printf("%s\n", passaro); // mostra canário
printf("Entre com um tipo de animal: ");
scanf("%s", animal); // ok se entrada < 20 chars
ps = animal; // faz ps apontar para string
printf("%ss!\n", ps); // ok, mesmo como usar animal
printf("Antes de usar strcpy():\n");
printf("%s em %d\n", animal, (int *) animal);
printf("%s em %d\n", ps, (int *) ps);
ps=(char *)malloc(strlen(animal)+1);
strcpy(ps, animal); // copia string ao novo local
printf("Depois de usar strcpy():\n");
printf("%s em %d\n", animal, (int *) animal);
printf("%s em %d\n", ps, (int *) ps);
free(ps);
system("pause");
}
