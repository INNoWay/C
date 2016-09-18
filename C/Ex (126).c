#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * peganome(void); // prot�tipo de fun��o

main()
{
 char * nome; // cria ponteiro sem armazenamento
 nome = peganome(); // atribui endere�o de string ao nome
 printf("%s em %d\n", nome, (int *) nome);
 free(nome); // libera mem�ria
 nome = peganome(); // reuso mem�ria liberada
 printf("%s em %d\n", nome, (int *) nome);
 free(nome); // libera mem�ria de novo
 system("pause");
}

char * peganome() // retorna ponteiro para string nova
{
 char temp[80]; // armazenamento tempor�rio
 char * pn;
 printf("Entre com o ultimo nome: ");
 gets(temp);
 pn=(char *)malloc(strlen(temp)+1);
 strcpy(pn, temp); // copia string num espa�o menor
 return pn; // temp perdido quando a fun��o termina
}
