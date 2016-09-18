Implementando uma lista linear a partir de um vetor

#include stdio.h
#include conio.h
#include string.h
#include stdlib.h

int maxTam=10;

struct TipoItem {	 cada item da lista corresponde a um
  char nome[30];	 registro (TipoItem) composto apenas
};			         do campo nome

struct TipoLista {
  TipoItem Item[10];
  int Ultimo;
};

 conjunto de operações que podem ser aplicadas 
 sobre o modelo 'TipoLista'
void FazListaVazia(TipoLista Lista);
int ListaVazia(TipoLista Lista);
void Imprime(TipoLista Lista);
int Insere(TipoItem x, TipoLista Lista);
int Retira(int p, TipoLista Lista, TipoItem x);

void InsereItens(TipoLista Lista);
void RetiraItens(TipoLista Lista);
void Parada(void);

int main() {
  TipoLista Lista;
  FazListaVazia(&Lista);  faz a Lista ficar vazia
  int opcao;
  do {
    system(cls);
    printf( MENU PRINCIPAL n);
    printf([ 1 ] Inserir Itensn);
    printf([ 2 ] Retirar Itensn);
    printf([ 0 ] Encerrar o Programan);
    printf(Opcao );
    do {
      scanf(%d, &opcao);
    } while ((opcao  0)  (opcao  2));
    switch (opcao) {
      case 1 InsereItens(&Lista); break;
      case 2 RetiraItens(&Lista);
    }
  } while (opcao != 0); 
}

 Faz a 'Lista' ficar vazia
void FazListaVazia(TipoLista Lista) {
  Lista-Ultimo = -1;
}

 Esta função retorna 1 (true) se a ‘Lista’ está vazia; 
 senão retorna 0 (false)
int ListaVazia(TipoLista Lista) {
  return(Lista-Ultimo == -1);
}

 Imprime os itens da 'Lista'
void Imprime(TipoLista Lista) {
  system(cls);
  for (int i=0; i=Lista-Ultimo; i++)
	 printf(%d- %sn, i, Lista-Item[i].nome);
}

 Insere o item 'x' na final da 'Lista'.
int Insere(TipoItem x, TipoLista Lista) {
  if (Lista-Ultimo == (maxTam - 1))
	  return(0);  Erro Lista Cheia !
  else {
	 Lista-Ultimo = Lista-Ultimo + 1;
	  item inserido no final da lista
	 Lista-Item[Lista-Ultimo] = x; 
	 return(1);	 Item inserido com sucesso
  }
}

 Retira o item ‘x’ que está na posição ‘p’ da ‘Lista’
int Retira(int p, TipoLista Lista, TipoItem x) {
  if ((ListaVazia(Lista))  (p  0)  (p  Lista-Ultimo))
	  return(0);  Erro Lista vazia ou posição não existe.
  else {
	 x = Lista-Item[p];  item retornado
 Desloca os itens a partir da posição p+1 para as
 posições anteriores
	 for (int i=p; i=(Lista-Ultimo-1); i++)
		Lista-Item[i] = Lista-Item[i+1];
	 Lista-Ultimo = Lista-Ultimo - 1;
	 return(1);  Item retirado com sucesso
  }
}

void InsereItens(TipoLista Lista) {
  fflush(stdin);
  TipoItem x;
  while (1) {
	 Imprime(Lista);
	 printf(nInforme um nome do item a ser inserido na lista, (FIM) para encerrarn);
	 gets(x.nome);
	 if (strcmp(x.nome, FIM) == 0)
		 break;
	 if (!Insere(x, Lista)) {
		 printf(nErro lista cheia !);
		 Parada();
	 }
  }
}

void RetiraItens(TipoLista Lista) {
  fflush(stdin);
  TipoItem x;
  int p;
  while (1) {
	 Imprime(Lista);
	 printf(nInforme a posicao do item a ser retirado da lista, (-1) para encerrarn);
	 scanf(%d, &p);
	 if (p == (-1))
		 break;
	 if (!Retira(p, Lista, &x))
		 printf(nErro lista vazia ou posicao invalida !);
	 else
		 printf(n%s foi retirado da lista., x.nome);
	 Parada();
  }
}

void Parada(void) {
  printf(Pressione [algo] para prosseguir.);
  getch();
}
