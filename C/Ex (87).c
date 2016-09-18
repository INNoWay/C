#include <stdio.h>
#include <stdlib.h>
#define N 2
struct testoque{
       char nome[15];
       char setor;
       char oferta;
       int quant;
       float preco;
       };
void fleitura(struct testoque v[]){
     
     int i;
        printf("-----------------------------------------------------------"); 
        printf("\n----Digite dados do Estoque--- \n");
        for (i = 0; i < N; i++){
           printf("----------------------------------------------------------- \n"); 
           fflush(stdin);
           printf(" Entre com nome do produto : ");
           gets (v[i].nome);
           fflush(stdin);
           printf(" Entre com setor que se localiza o produto (A) (B) (C) (D) : ");
            v[i].setor=getche ();
           fflush(stdin);
           printf(" \n Entre com preco do produto : ");
           scanf ("%f", &v[i].preco);
           printf(" Entre com quantidade : ");
           scanf ("%d", &v[i].quant);    
    }
}
void fconsulta_set(struct testoque v[]){

    char produt;
    
       printf("-----------------------------------------------------------");    
        printf("\n Entre com setor que deseja saber (A) (B) (C) (D): ");
        produt=getche();
        switch (produt){
               case 'A' : printf("\n Quantidade de produtos no setor A: %d \n", v[0].quant);
               break;
               case 'B' : printf("\n Quantidade de produtos no setor B: %d \n", v[1].quant);
               break;
               case 'C' : printf("\n Quantidade de produtos no setor C: %d \n", v[2].quant);
               break;
               case 'D' : printf("\n Quantidade de produtos no setor D: %d \n", v[3].quant);
               break;
        }
}

void fconsultanome(struct testoque v[]){
    
     int i;
     char nomes[15];
     printf("-----------------------------------------------------------");
     fflush(stdin);
     printf("\n entre com nome do produto que deseja comprar: \n ");
     gets (nomes);
     fflush(stdin);
     for(i=0;i<N;i++) 
        if (strcmp(nomes,v[i].nome)==0){
           printf("\n Temos o produto desejado no setor:\n");
        }
        else{
           printf("\n Nao Temos o produto desejado no setor:\n");   
           }
      
}
int ftotalinvestido (struct testoque v[]){
    
    int i;
    int soma=0;
    int total;
    
    for (i=0; i < N; i++){
    total=v[i].preco*v[i].quant;
    soma = soma + total;
    }
    return soma;
}
float fporcent_oferta( struct testoque v[]){
      
      int i;
      float porcent;
      
      for(i=0;i<N;i++){
      porcent=v[i].preco*100.0/N;
      }
      return porcent;
}          
int main(int argc, char *argv[])
{
struct testoque vet[N]; 

fleitura(vet);
fconsulta_set(vet);
fconsultanome(vet);
printf("\n total investido:%d\n",ftotalinvestido(vet));  
printf("\n porcentagen:%f\n",fporcent_oferta(vet));  

  system("PAUSE");	
  return 0;
}
