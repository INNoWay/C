#include <stdio.h>
#include <stdlib.h>

struct produto{
	int codigo;
	char descricao[100];
	int quantidade;
	float valorUnitario;
	int tipo;
};

typedef struct{
    int tam;
    int fim;      
    int *vet;
    int inicio;
    struct produto vetor[5];     
}tp_lista;

int cont=0, op, opp=0;
 
int lista_vazia(tp_lista *lista){
	
    if(lista->fim==lista->inicio){
        
		return 1;
    }
    
    else
    
        return 0;
        
}
 
inserindo(tp_lista *lista){
	int j=0;
	int c=cont;
		
	int cod,n=0;
	
	int i;
	
    struct produto prod;  	 
 
    lista->tam++; 
    
    lista->vet=(int*)malloc(lista->tam* sizeof(int*));   
 
 	printf("\n---------------CADASTRO---------------\n");
  	
	printf("\n Digite o codigo do produto: ");
	scanf("%d",&cod);
	
		for(i=0;i<cont;i++){	
		
			if(cod==lista->vetor[i].codigo){ 
			
			n=1;
			
			}			
	
		}		
	
		if(n==0){ 
		
		prod.codigo=cod;
		
		prod.quantidade=0;		
	
	    printf("\n Digite o tipo do produto: ");		
		scanf("%d",&prod.tipo);
		printf("\n Digite a descricao do produto: ");
		scanf("%s",&prod.descricao);	
	    fflush(stdin);
		printf("\n Digite o valor unitario: ");
		scanf("%f",&prod.valorUnitario); 	
        //for(i=0; i<5;i++){
    	lista->vetor[cont]=prod;
        //}
        lista->fim++;
  
    	cont++; 
		}else{
			
		printf("\n ESSE CODIGO JA ESTA CADASTRADO ");
			
		}
	
 
}
 
inse(tp_lista *lista){
	
	int c=cont,i;
	
	int cod, quantidade,nn;	
	
    if(!lista_vazia(lista)){    	
    	
    printf("\n CODIGO DO PRODUTO: ");
    scanf("%i",&cod);
    
	for(i=0;i<cont;i++){	
		
		if(cod==lista->vetor[i].codigo){ 
			
		nn=1;
			
		}			
	
	}
		
	if(nn==1){ 
		
    printf("\n QUANTIDADE: ");    
	scanf("%d",&quantidade);
     			
		for(i=0;i<cont;i++){	
			
     		if(lista->vetor[i].codigo==cod){  
        	
        	lista->vetor[i].quantidade=lista->vetor[i].quantidade+quantidade;   
			
			printf("\n A QUANTIDADE DO PRODUTO FOI ATUALIZADA ");      
        	
			}
		
		}	
		 
    }else{
    	
	printf("\n CODIGO NAO ESTA CADASTRADO ");
	
	}
    
	}else
	     
    printf("\n LISTA VAZIA!\n");
        
}
 
excluindo(tp_lista *lista,tp_lista *lista1){
		
	int c=cont,i;
	
	int cod, qtd,m=0;
	
    if(!lista_vazia(lista)){
     	
    printf("\n CODIGO DO PRODUTO: ");
     	
	scanf("%i",&cod);
	
		for(i=0;i<cont;i++){	
		
			if(cod==lista->vetor[i].codigo){ 
			
			m=1;
			
			}			
	
		}
		
	if(m==1){ 
		
	printf("\n QUANTIDADE: ");
		
	scanf("%i",&qtd);	
		
		for(i=0;i<cont;i++){	
			
     		if(lista->vetor[i].codigo==cod){   
			 
			 	if(lista->vetor[i].quantidade <= 0){
					
				printf("\n QUANTIDADE INDISPONIVEL");
				
				}else{  
		 	
        		lista->vetor[i].quantidade=lista->vetor[i].quantidade-qtd;	
				
					if(opp==0){	
					
					lista1->vetor[i]=lista->vetor[i];	
				
					lista1->vetor[i].quantidade=0;
				
					lista1->vetor[i].quantidade=lista1->vetor[i].quantidade+qtd;        
				
					op=1;
        			
					printf("\n PRODUTO VENDIDO");
				
					opp=1;
					
					}else{
				
					lista1->vetor[i].quantidade=lista1->vetor[i].quantidade+qtd;        
				
					op=1;
        			
					printf("\n PRODUTO VENDIDO");
			
					}
					
				}
        
			}
		
		}
		
    }else{
    	
	 	printf("\n CODIGO NAO ESTA CADASTRADO ");
	 	
	}
	
	}else
	     
        printf("\n LISTA VAZIA!\n");
        
}
 
listar(tp_lista *lista,tp_lista *lista1){
	
    int i;
    int c=cont;
    
    	if(!lista_vazia(lista)){
    		
    		printf("\n\n PRODUTOS EM ESTOQUE!\n");
    		
    		for(i=0;i<cont;i++){
    			
        	printf("\n\n Codigo do produto: %i \n",lista->vetor[i].codigo);
        	
        	printf(" Descricao do produto: %s\n",lista->vetor[i].descricao);
        	
        	printf(" Quantidade Disponivel: %i\n",lista->vetor[i].quantidade);
        	
        	printf(" Valor unitario: %.2f\n",lista->vetor[i].valorUnitario);   
			       
        	printf(" Tipo do produto: %i\n",lista->vetor[i].tipo);
      
    		}
    		
    		if(op==1){
			
    		
    		printf("\n\n PRODUTOS VENDIDOS!\n");
    		
    			for(i=0;i<cont;i++){
    			
        		printf("\n\n Codigo do produto: %i \n",lista1->vetor[i].codigo);
        	
        		printf(" Descricao do produto: %s\n",lista1->vetor[i].descricao);
        	
        		printf(" Quantidade Vendida: %i\n",lista1->vetor[i].quantidade);
        	
        		printf(" Valor unitario: %.2f\n",lista1->vetor[i].valorUnitario);   
			       
        		printf(" Tipo do produto: %i\n",lista1->vetor[i].tipo);
      
    			}
    		
    		}
    		
    }else
    
    printf("\n LISTA VAZIA!\n");
    
}
 
int main(){
	
    tp_lista lista;
    tp_lista lista1;
    
    int verifica;
 
    	while(verifica!=5){
    	
    	printf("\n");
    	printf("\n-----------------MENU-----------------\n\n");
    	printf(" (1) CADASTRAR PRODUTOS\n");
        printf(" (2) CADASTRAR QUANTIDADE\n");
        printf(" (3) VENDER PRODUTO\n");
        printf(" (4) EXIBIR RELACAO NO ESTOQUE\n");        
        printf(" (5) SAIR\n");
        printf("\n OPCAO: ");  
		scanf("%i",&verifica);
		fflush(stdin);
 
        	switch(verifica){
            	case 1:
                	inserindo(&lista);
                break;
                case 2:
                	inse(&lista);
                break;
                case 3:
                	excluindo(&lista,&lista1);
                break;
            	case 4:
                	listar(&lista,&lista1);
                break;            	 	         
           	 	default:
                return 0;
        	}
        
   		}
 
}
