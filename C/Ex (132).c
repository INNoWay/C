//Lista Circular

#include <stdio.h>
#include <stdlib.h>

struct lista {
       int itens;
       struct lista* prox;
};
typedef struct lista Lista;

Lista* cria_no() {
       Lista* novo = (Lista*) malloc(sizeof(Lista));
       if (novo==NULL) {
                       printf ("Erro de alocação na memoria");
                       exit (-1);
                       }
       novo->prox = novo;
       return novo;
}

void listar (Lista* inicio){
     Lista* p = inicio;
     if (p) do {
            printf ("%d \n", p->itens);
            p = p->prox;
            }while (p!= inicio);
}

Lista* insere (lista* inicio,int e){
       Lista* ant = NULL;
       Lista* p = inicio;
       Lista* novo = cria_no();
       novo->itens = e;
       if (p == NULL){
             p = novo;
             novo->prox = novo;
             return p;      
       }
       do{        
       ant = p;            
       p= p->prox;        
       }while(p != inicio);
       ant->prox=novo;
       novo->prox=p;
       return inicio;
       }


Lista* buscar(Lista* inicio, int a){
    if(inicio == NULL) return NULL;
    Lista* p = inicio;
    do{
        if(p->itens == a) return p;
        p = p->prox;
    } while(p != inicio);
}

Lista* deleta (lista* inicio, int e)
{
       Lista* p = buscar(inicio,e);
       Lista* temp = NULL;
       Lista* ant = inicio;
       if(p == NULL)return inicio;
       if(inicio == p && inicio == p->prox){
            free(p);
            return NULL;
       }
       if(inicio->itens == e){
            temp = inicio->prox;
            p = inicio->prox; 
            do{
                p = p->prox;
            }while(p->prox != inicio);
            p->prox = inicio->prox;
            free(inicio);
            return temp;
       }
       do{
           temp = ant;
           ant = ant->prox;
       }while(ant != inicio && ant->itens != e);
       temp->prox=ant->prox;
       free(p);
       return inicio;
}

int main(){
    system ("color b");
    int op=-1;
    int e;
    int rep;
    Lista* inicio = NULL;
    Lista* p = NULL;
    do{
        system("cls");
        printf("**********MENU***********");
        printf("\n\n1 - Inserir\n2 - Remover\n3 - Busca\n4 - Listar\n0 - Exit\n\nOpcao: ");
        scanf("%d",&op);
        switch(op){
                      case 1:
                           do {
                           system("cls");
                           printf("Informe um numero: ");
                           scanf("%d",&e);
                           p = inicio;
                           p = insere(p,e);
                           inicio = p;
                           printf ("deseja inserir novo elemento? (s-1/n-2)");
                           scanf ("%d", &rep);
                           }while (rep==1);
                           break;
                      case 2:
                           system("cls");
                           printf("Informe um numero: ");
                           scanf("%d",&e);
                           p = inicio;
                           p = deleta(p,e);
                           inicio = p;
                           break;
                      case 3:
                           system("cls");
                           printf("Informe um numero: ");
                           scanf("%d",&e);
                           p = inicio;
                           printf("%d\n",buscar(p,e));
                           system("pause");
                           break;
                      case 4:
                           system("cls");
                           printf ("Os elementos da lista sao: \n");
                           p = inicio;
                           listar(p);
                           system("pause");
                           break;
                      case 0:
                           break;
                      default:
                           printf("Informe opcao valida!\n");
                           system("pause");
                           break;
                      }                                                           
        }while(op!=0);
}



       
       
       
       
       
