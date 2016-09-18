#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * peganome(void); // protótipo de função

main()
{
 char * nome; // cria ponteiro sem armazenamento
 nome = peganome(); // atribui endereço de string ao nome
 printf("%s em %d\n", nome, (int *) nome);
 free(nome); // libera memória
 nome = peganome(); // reuso memória liberada
 printf("%s em %d\n", nome, (int *) nome);
 free(nome); // libera memória de novo
 system("pause");
}

char * peganome() // retorna ponteiro para string nova
{
 char temp[80]; // armazenamento temporário
 char * pn;
 printf("Entre com o ultimo nome: ");
 gets(temp);
 pn=(char *)malloc(strlen(temp)+1);
 strcpy(pn, temp); // copia string num espaço menor
 return pn; // temp perdido quando a função termina
}
