#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "stdlib.h"

struct Produto{
  char descricao[30];
};

typedef struct celula *Apontador;

struct celula {
    Produto Item;
    Apontador prox;
};

struct TipoLista {
  Apontador Primeiro;
  Apontador Ultimo;
};

void FazListaVazia(TipoLista *Lista){
  Lista->Primeiro->prox = NULL;
  Lista->Ultimo = Lista->Primeiro;
}

void Imprime(TipoLista *Lista) {
  system("cls");
  int i = 1;
  Apontador p = Lista->Primeiro->prox;
  while (p != NULL) {
    printf("%d- %s\n", i, p->Item.descricao);
    i = i + 1;
    p = p->prox;
  }
}

void Insere(Produto x, TipoLista *Lista) {
  Lista->Ultimo->prox = (Apontador) malloc(sizeof(celula));
  Lista->Ultimo = Lista->Ultimo->prox;
  Lista->Ultimo->Item = x;
  Lista->Ultimo->prox = NULL;
}

void InsereItens(TipoLista *Lista) {
  fflush(stdin);
  Produto x;
  while (1) {
    Imprime(Lista);
    printf("\nInforme o nome do item a ser inserido na lista, (FIM) para encerrar:\n");
    gets(x.descricao);
    if (strcmp(x.descricao, "FIM") == 0)
       break;
    Insere(x, Lista);
  }
}

int RetiraItens(TipoLista *Lista) {