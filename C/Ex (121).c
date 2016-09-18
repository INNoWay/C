//perguntando os valores a partir da estrutura
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dados_aluno
{
	char RA[10];
	char nome[50];
	char rua[50];
	int numero;
	char bairro [20];
            char cidade [30];
	char estado [2];
	char cep[13];
};
main()
{
	struct dados_aluno escola;
    printf("Entre com o RA:");
    fflush(stdin);
	gets(escola.RA);
    printf("Entre com o nome do aluno:");
    fflush(stdin);
	gets(escola.nome);
    printf("Entre com a rua:");
    fflush(stdin);
    gets(escola.rua);
    printf("Entre com o numero:");
    scanf("%i",&escola.numero);
    printf("Entre com o bairro:");
    fflush(stdin);
    gets(escola.bairro);
    printf("Entre com a cidade:");
    fflush(stdin);
    gets(escola.cidade);
    printf("Entre com o estado:");
    fflush(stdin);
    gets(escola.estado);
    printf("Entre com o cep:");
    fflush(stdin);
    gets(escola.cep);
    printf("\n\n");
	printf("RA: %s NOME: %s\n",escola.RA,escola.nome);
    printf("CIDADE: %s",escola.cidade);
    system("pause");
}
