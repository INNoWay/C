#include "stdio.h"
#include "stdlib.h"

struct vendas{
    int codpeca;
    int qtd;
    float valor;
    char nome[50];
    char data[10];
    float valort;
};
main(){
    int i;
    struct vendas  vendas[3];
    
        for(i=0;i<=2;i++){
        printf("Digite o Codigo da %i peca : ",i+1);
        scanf("%i",&vendas[i].codpeca);
        
        printf("Digite a Quantidade da %i peca: ",i+1);
        scanf("%i",&vendas[i].qtd);
        
        printf("Digite o Valor da %i peca: ",i+1);
        fflush(stdin);
        scanf("%f",&vendas[i].valor);
        
        printf("Digite o Nome da %i peca: ",i+1);
        fflush(stdin);
        scanf("%s",&vendas[i].nome);
        
        printf("Digite a Data de entrada da %i peca: ",i+1);
        fflush(stdin);
        scanf("%s",&vendas[i].data);
        vendas[i].valort=vendas[i].valor*vendas[i].qtd;
        
        printf("\n\n");
        }
       
        for(x=0;x<=2;x++){
            if(vendas[i].valort>500){
             printf("%f ",vendas[x].valort);
             printf("%s ",vendas[x].nome);
            }
        printf("\n");
        }
   system("pause");    
   
}

================================================================================

================================================================================
#include "stdio.h"
#include "stdlib.h"

struct agenda{
    
    char nome[50];
    char tel[15];
    char end[50];
   
};

int main(int argc, char *argv[])
{
    
    struct agenda  agenda[3];
    
    char nomep[50];
    int opcao,i,opcao1;
    
    
    do{
    printf("---------Opcao 1 Cadastrar na agenda---------");
    printf("\n");
    printf("--------Opcao 2 Classificar a agenda---------");
    printf("\n");
    printf("---------Opcao 3 Pesquisar na agenda---------");
    printf("\n");
    printf("-----------Opcao 4 Listar a agenda-----------");
    printf("\n");
    printf("----------------Opcao 0 Sair-----------------");
    printf("\n\n");
    printf("\n"); 
    printf("Digite a opcao desejada: ");
    scanf("%i",&opcao);
    printf("\n\n");
    opcao1=opcao;
    
    
    if(opcao == 1){
        
        for(i=0;i<=2;i++){
        do{
        fflush(stdin);
        printf("Digite o Nome na agenda: ");
        gets(agenda[i].nome);
        fflush(stdin);
        printf("Digite o Telefone na agenda: ");
        gets(agenda[i].tel);
        fflush(stdin);
        printf("Digite o Endereco na agenda: ");
        gets(agenda[i].end);
        fflush(stdin);
        printf("\n\n");
        printf("Deseja continua Cadastrando (1) sim (2) voltar ao Menu: ");
        scanf("%i",&opcao1);
        printf("\n\n");
            if(opcao1==2){
            i=2;
            opcao1=5;
            }
        }
            while(opcao1==1); 
            }
        }
    }	
    while(opcao1==5);
    
    if(opcao == 2){
        for(i=0;i<=2;i++){
        printf("\nNome:     %s",agenda[i].nome);
        printf("\nTelefone: %s",agenda[i].tel);
        printf("\nEndereco: %s",agenda[i].end);
        printf("\n\n");
        }
    }
     if(opcao == 3){
         do{   
            printf("Digite o nome que deseja encontrar: ");
            fflush(stdin);
            gets(nomep);
            for(i=0;i<=2;i++){
            if(strcmp(agenda[i].nome,nomep)==0){
            printf("\nNome:     %s",agenda[i].nome);
            printf("\nTelefone: %s",agenda[i].tel);
            printf("\nEndereço: %s",agenda[i].end);
                }
                else{
                    printf("Pessoa nao encontrada!!");
                    }
        printf("\n\n");
        printf("Deseja realizar uma nova busca (1) sim (2) voltar ao Menu: ");
        scanf("%i",&opcao1);
        printf("\n\n");
         if(opcao1==2){
            i=2;
            opcao1=5;
            }
            else{
                opcao1=1;
                }          
        }
    }
        while(opcao1==1);   
             
            
    }
    system("pause");
  return 0;

}