//perguntando os valores a partir da estrutura
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno
{
	char nome[50];
	int idade;
};
main()
{
	struct aluno aluno[3];
	int i;
	
	//Leitura
	for(i=0; i<=2; i++){
      printf("Entre com o nome do aluno:");
      fflush(stdin);
	  gets(aluno[i].nome);
      printf("Entre com a idade:");
      scanf("%i",&aluno[i].idade);
    }
    //Exibição
    printf("\n\n");
    for(i=0; i<=2; i++){
	  printf("NOME: %s %i\n",aluno[i].nome,aluno[i].idade);
    }
    system("pause");
}
