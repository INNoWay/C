#define N 5
struct livro { //definimos um novo tipo
char titulo [30];
int quant;
float preco;
};
void fleitura( struct livro l[])
{
  int i;
    printf("\n----Digite dados de %d livros---\n", N);
    for (i = 0; i < N; i++)
    {
    printf(" \nDigite os dados do livro %d: \n", i);
    printf (" Digite titulo: "); 
    gets (l[i].titulo);
    printf (" Digite quantidade: "); scanf ("%d", &l[i].quant);
    printf (" Digite preco: "); scanf ("%f", &l[i].preco);
    }
}
void fimprime( struct livro l[])
    { 
     int i;
     printf(" \n\n---Os seguintes livros foram cadastrados:--- \n");
     for (i = 0; i < N; i++)
    {
     printf(" \nLivro %d: \n", i);
     printf (" Titulo: %s \n", l[i].titulo);
     printf (" Quantidade: %d \n", l[i].quant);
     printf (" Preco: %f\n", l[i].preco);
    }
}
int fsomaquant(struct livro l[])
{ int i, soma = 0;
for (i=0; i < N; i++)
soma = soma + l[i].quant;
return soma;
}
int main( )
{
struct livro liv[N]; //vetor de livros
fleitura(liv);
printf ("\n\n---Quantidade total de livros = %d ---\n", fsomaquant(liv));
fimprime(liv);
system("PAUSE");
return 0;
}
