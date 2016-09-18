#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include "Estrutura_Segundo_Lista.cpp"

void FLVazia (TipoLista *Lista)
 {
  Lista ->Primeiro= (Celula*) malloc(sizeof(Celula));
  Lista ->Ultimo= Lista->Primeiro;
  Lista ->Primeiro ->Prox= NULL;
 }

int Vazia (TipoLista Lista)
 {
  return (Lista.Primeiro == Lista.Ultimo);
 }

void Insere (TipoItem x, TipoLista *Lista)
 {
  Lista -> Ultimo -> Prox = (Celula*) malloc (sizeof(Celula));
  Lista -> Ultimo = Lista -> Ultimo -> Prox;
  Lista -> Ultimo -> Item = x;
  Lista -> Ultimo -> Prox = NULL;
 }

void Imprime (TipoLista Lista)
 {
  Celula* Aux;
  Aux = Lista.Primeiro -> Prox;
  while (Aux != NULL)
   {
    printf ("\n\nCodigo do elemento: %d",Aux->Item.chave);
    printf ("\nNome do elemento: %s",Aux->Item.nome);
    printf ("\nIdade do elemento: %d",Aux->Item.idade);
    //getch();
    Aux=Aux->Prox;
   }
 }

//Encontra o endereco de um item a partir do seu codigo
Celula* Localiza (int cod, TipoLista *Lista){
  Celula* paux;
  paux=Lista->Primeiro;
  while ((paux->Prox != NULL) && (paux->Prox->Item.chave != cod)){
    paux=paux->Prox;
  }
  return (paux);
}

//Remove item da lista
//Obs.: o item a ser retirado e o seguinte ao apontado por p
void Retira (Celula* p, TipoLista *Lista){
  Celula* q;
  if (Vazia(*Lista)||p->Prox==NULL){
    printf ("Erro: lista vazia ou posicao inexistente.\n");
    getch();
  }
  else{
    q=p->Prox;
    p->Prox=q->Prox;
    if (p->Prox==NULL)
    Lista->Ultimo=p;
    free(q);
  }
}

main (){