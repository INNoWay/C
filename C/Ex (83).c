#define N 5
struct livro { //definicao da estrutura struct livro
char titulo [30];
int quant;
float preco;
};
int main( )
{
struct livro liv[N]; //vetor de livros – variável liv
int i;
for (i = 0; i < N; i++)
{
printf(" \nDigite os dados do livro %d: \n", i);
printf (" Digite titulo: "); 
 gets (liv[i].titulo);
printf (" Digite quantidade: ");
 scanf ("%d", &liv[i].quant);
printf (" Digite preco: "); 
scanf ("%f", &liv[i].preco);
}
printf(" \n\nOs seguintes livros foram cadastrado: \n");
for (i = 0; i < N; i++)
{
printf(" \nLivro %d: \n", i);
printf (" Titulo: %s \n", liv[i].titulo);
printf (" Quantidade: %d \n", liv[i].quant);
printf (" Preco: %f\n", liv[i].preco);
}
system("PAUSE");
return 0;
}
