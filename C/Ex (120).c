//valores fixos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados_aluno{
	char RA[10];
	char nome[50];
	char rua[50];
	int numero;
	char bairro [20];
    char cidade [30];
	char estado [3];
	char cep[13];
};

main(){
	struct dados_aluno escola;
	strcpy (escola.RA,"1400080");
	strcpy (escola.nome,"Joao Vicentinho Souza");
	strcpy (escola.rua,"Rua das Flores");
	escola.numero=44;
	strcpy (escola.bairro,"Jd. das Saudades");
	strcpy (escola.cidade,"Hortolandia");
	strcpy (escola.estado,"SP");
	strcpy (escola.cep,"13185000");
	system("cls");
	printf("Registro Academico: %s\n",escola.RA);
	printf("Nome do aluno: %s\n",escola.nome);
	printf("Logradouro: %s, numero: %i\n",escola.rua, escola.numero);
	printf("Bairro: %s - Cidade: %s / %s\n",escola.bairro,escola.cidade,escola.estado);
	printf("CEP: %s\n",escola.cep);
	printf("\n");
	system("pause");
}
