#include <stdio.h>
#include <stdlib.h>


struct Pilha {
	int topo; 
	int capa;
    	int *pElem1;
    	int *pElem2;
    
};
struct Pilha2 {
       int capa;
       int topo; 
       int *pElem3;
       int *pElem4;
       };
typedef struct Pilha pilha;
typedef struct Pilha2 pilha2;
pilha * criarpilha( struct Pilha *p, int c ){
      
   p->capa = c;
   p->pElem1 = (int *) malloc (c * sizeof(int *));
   
}
pilha2 * criarpilha2( struct Pilha2 *p2, int c2 ){
      
   p2->capa = c2;
   p2->pElem3 = (int *) malloc (c2 * sizeof(int *));
   
}

pilha * copia_pilha(struct Pilha *p,int c){
    p->pElem2=p->pElem1;   
    int i=c;    
    for( i=c; i > 0; i--){      
    printf("\n Valor da Pilha 1: %d Posicao: %d",p->pElem1[p->topo],i);
    printf("\n Valor da Pilha 2: %d Posicao: %d",p->pElem2[p->topo],i);
    p->topo--;
    printf("\n");
    }
    printf("\n");
};

int estavazia ( int nul ){

   if(nul == 0 )

      return 1;   

   else

      return 0;   

}

int estacheia (int c ){

	if (c == 0)

		return 1;

	else

		return 0;

}

void empilhar ( struct Pilha *p, float v,int c){
if(c==0){
   p->topo = -1;
   }else{
	p->topo++;
    p->pElem1 [p->topo] = v;	
}
}

void empilhar2 ( struct Pilha *p,struct Pilha2 *p2,float v,int c2){
if(c2==0){
   p->topo = -1;
   }else{
	p2->topo++;
    p2->pElem3 [p2->topo] = v;	
}
}

float desempilhar ( struct Pilha *p ){

   float aux = p->pElem1 [p->topo];
   p->topo--;
   return aux;

}

float retornatopo ( struct Pilha *p ){

   return p->pElem1[p->topo];

}

void concatena_pilhas (struct Pilha *p, struct Pilha2 *p2,int c) {
    p  -> pElem2 = p  -> pElem1; 
    p2 -> pElem4 = p2 -> pElem3; 
    int i=c;  
    printf("\nValor concatenado");     
    for( i=c; i > 0; i--){     
    printf("\n %d",p2->pElem4[p2->topo]);
    p2->topo--;
    }
    for( i=c; i > 0; i--){ 
    printf("\n %d",p->pElem2[p->topo]);    
    p->topo--;    
    }
    printf("\n");
}

int main(){

	struct Pilha minhapilha;
	struct Pilha2 minhapilha2;
	
	int capacidade, op;
	float valor;
	int cap,nula=0,cap2;

	printf( "\n Tamanho da pilha: " );
	scanf( "%d", &capacidade );
	cap = capacidade;
	cap2 = capacidade;
	
	criarpilha (&minhapilha, capacidade);

	while( 1 ){ 
	    printf("\n");
		printf(" 1- Empilhar (push)\n");
		printf(" 2- Desempilhar (pop)\n");
		printf(" 3- Mostrar o topo \n");
		printf(" 4- Concatena Lista \n");
		printf(" 5- Trasfere o valor da pilha (1) para pilha (2) \n");
		printf(" 6- Sair\n");
	    printf("\n");
		printf("Opcao: ");
		scanf("%d", &op);

		switch (op){

			case 1: 

				if( estacheia(cap) == 1 )

					printf("\n PILHA CHEIA! \n");

				else {

					printf("\n Qual Valor que Deseja Na Pilha 1: ");
					scanf("%f", &valor);
                    empilhar (&minhapilha, valor, cap);		
                    cap=cap-1;	
                    nula=nula+1;		
    	            printf("\n Posicoes Disponiveis na P1: %d\n",cap);
    	            
				}
				break;

			case 2:
				if ( estavazia(nula) == 1 )

					printf( "\n PILHA VAZIA! \n" );

				else{

					valor = desempilhar (&minhapilha);
					printf ( "\n %.1f DESEMPILHADO!\n", valor );

				}
				break;

			case 3: 
				if ( estavazia (nula) == 1 )

					printf( "\n PILHA VAZIA!\n" );

				else {

					valor = retornatopo (&minhapilha);
					printf ( "\n TOPO: %.1f\n", valor );

				}
				break;
				
            case 4: 
				if ( estavazia (nula) == 1 )

					printf( "\n PILHA VAZIA!\n" );

				else {
                    while(cap2!=0){
                    printf("\n Qual Valor que Deseja Na Pilha 2: ");
					scanf("%f", &valor);					
                    empilhar2 (&minhapilha,&minhapilha2,valor, cap2);	
                    cap2=cap2-1;	
                    nula=nula+1;		
    	            printf("\n Posicoes Disponiveis na P2: %d\n",cap2);
                    }                 
				    concatena_pilhas(&minhapilha,&minhapilha2,capacidade);
				}
				break;
            case 5: 
				if ( estavazia (nula) == 1 )

					printf( "\n PILHA VAZIA!\n" );

				else {
              
                     copia_pilha(&minhapilha, capacidade);

				}
				break;


			case 6: 
				exit(0);

			default: printf( "\n OPCAO INVALIDA! \n" );
		}
		
	}
	
}
