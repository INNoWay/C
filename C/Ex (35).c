#include <stdio.h>
#include <stdlib.h>
struct tlivro{
   float preco;
   int numexplares;
   char nome[100],ultedi;
};
int main(int argc, char *argv[])
{
  struct tlivro a,b,c;
  float valestoque;
  int total;
  printf("---Leitura da edicao A---\n");
  printf(" Entre com nome do livro \n ");
  scanf ("%s",a.nome);
  printf(" Entre com preco do livro ");
  scanf ("%f",&a.preco);
  printf(" Entre com numero de exeplares ");
  scanf ("%d",&a.numexplares);
  printf("Entre com a ultima edicao (s/n)\n");
  a.ultedi=getche();
  
  printf("---Leitura da edicao B---\n");
  printf(" Entre com nome do livro \n ");
  scanf ("%s",b.nome);
  printf(" Entre com preco do livro ");
  scanf ("%f",&b.preco);
  printf(" Entre com numero de exeplares ");
  scanf ("%d",&b.numexplares);
  printf("Entre com a ultima edicao (s/n)\n");
  b.ultedi=getche();
  
  printf("---Leitura da edicao C---\n");
  printf(" Entre com nome do livro  \n");
  scanf ("%s",c.nome);
  printf(" Entre com preco do livro" );
  scanf ("%f",&c.preco);
  printf(" Entre com numero de exeplares ");
  scanf ("%d",&c.numexplares);
  printf("Entre com a ultima edicao (s/n)\n");
  c.ultedi=getche();
    
  printf("---Lovros da ultima edicao:\n");
  
  if (a.ultedi=='s')
  printf("nome do livro da ultima edicao: %s\n",a.nome);

  if (b.ultedi=='s')
  printf("nome do livro da ultima edicao: %s\n",b.nome);

  if (c.ultedi=='s')
  printf("nome do livro da ultima edicao: %s\n",c.nome);

  valestoque=a.preco*a.numexplares+b.preco*b.numexplares+c.preco*c.numexplares;
  printf("valor total do estoque: %\n",valestoque);
  
  total=a.numexplares+b.numexplares+c.numexplares;
  printf("total de livros: %d\n",total);
  system("PAUSE");	
  return 0;
}
