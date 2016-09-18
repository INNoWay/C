#include "stdio.h"
#include "stdlib.h"

typedef struct
 {
  int chave;
  char nome [30];
  int idade;
 } TipoItem;

struct Celula
 {
  TipoItem Item;
  Celula* Prox;
 };

typedef struct
 {
  Celula* Primeiro;
  Celula* Ultimo;
 } TipoLista;
