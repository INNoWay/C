#include <stdio.h>
#include <stdlib.h>

int main( )
{
float nota [5];
int i;
printf ("Digite as notas de 5 alunos: ");
for (i = 0; i < 5; i++){ //repetição para leitura
scanf ("%f", &nota[i]);
printf ("As notas digitadas foram as seguintes: \n");
}
for (i = 0; i < 5; i++){
printf ("%f \n", nota[i]);
}
system("pause");
return 0;
}
