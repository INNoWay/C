//Busca em uma estrutura de registro - Organização Sequencial

#include "stdio.h"
#include "string.h"
#include "conio.h"
#include "stdlib.h"

struct DADOS{
    int D_CODIGO;
    char D_CARGO[20];
};

main()
{
   struct DADOS TABELA[10];
   int i,codigo;
   int acha,resp;
   system("cls");
   for(i=0;i<=9;i++){
       printf("\nCodigo........:");scanf("%i",&TABELA[i].D_CODIGO);
       printf("\nCargo.........:");scanf("%s",&TABELA[i].D_CARGO);
   }

  do{
     printf("Digite o codigo a ser pesquisado....:");
     scanf("%i",&codigo);
     i=1;
     acha=0;
     while ((i<=10) && (acha==0)){
	 if(TABELA[i].D_CODIGO == codigo)
		acha = 1;
	 else
		i=i+1; }
     if(acha==1){
	printf("\nCargo......:%s",TABELA[i].D_CARGO);
     }
     else
        printf("Nao existe cargo para o codigo informado");
     printf("\n\nDeseja continuar a pesquisa? 1 = Sim");
     scanf("%i",&resp);
  } while (resp==1);
  getche();
}
