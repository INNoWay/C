/*Declara��o da estrutura Nome. Dentro desta estrutura 
cont�m os itens Primeiro, Meio, Sobrenome. J� a segunda 
estrutura est� vinculada ao Nome, contendo a vari�vel idade.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
  struct NomeCompleto {
  	  char Primeiro[15];
  	  char Meio[15];
      char Sobrenome[15];
};

struct Pessoa {
    struct NomeCompleto Nome;
    int idade;
};

struct Pessoa Cadastro;

printf("Digite seu primeiro nome: ");
gets(Cadastro.Nome.Primeiro);
printf("Digite seu nome do meio: ");
gets(Cadastro.Nome.Meio);
printf("Digite seu sobrenome: ");
gets(Cadastro.Nome.Sobrenome);
printf("Digite sua idade: ");
scanf("%i",&Cadastro.idade);
printf("Nome completo: %s %s %s\nIdade: %i anos\n", 
   Cadastro.Nome.Primeiro,Cadastro.Nome.Meio,
   Cadastro.Nome.Sobrenome,Cadastro.idade);
printf("\n");
system("pause");
}
