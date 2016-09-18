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
printf (" Digite quantidade: ");
scanf ("%d", &l[i].quant);
printf (" Digite preco: "); 
scanf ("%f", &l[i].preco);
}
}
void fimprime( struct livro l[])
{ //imprime l que equivale a liv ou a qualquer vetor de livros passado
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
float ftotal(struct livro l[]){
    int i;
    float total=0;
    for(i=0;i<N;i++)
        total=total+l[i].quant*l[i].preco;
    return total;
}
int main( )
{
struct livro livraria1[N], livraria2[N]; //vetor de livros de duas livrarias
printf(" DADOS DA LIVRARIA X: \n");
fleitura(livraria1);
printf ("\n\n---Quantidade total de livros da livraria X= %d ---\n",fsomaquant(livraria1));
fimprime(livraria1);
printf(" \n-----------------------------------\n DADOS DA LIVRARIA Z: \n");
fleitura(livraria2);
printf ("\n\n---Quantidade total de livros da livraria Z= %d ---\n",fsomaquant(livraria2));
fimprime(livraria2);
printf(" \n Total obtido da livraria X: %f \n",ftotal(livraria1));
printf(" \n Total obtido da livraria Z: %f \n",ftotal(livraria2));
system("PAUSE");
return 0;
}
