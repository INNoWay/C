#define M 5 //constante
int A[M]; // o tamanho do vetor � M � vetor � uma vari�vel global
void fleitura( )
{
int i;
printf(" Digite os %d elementos inteiros: \n",M);
for (i=0; i < M; i++)
scanf("%d",&A[i]);
}
int fsoma( ) // retorna a soma dos elementos lidos
{
int soma, i;
soma = 0;
for (i=0; i < M; i++)
soma = soma + A[i];
return soma;
}
void fimprime( )
{
int i;
printf("\nElementos do Vetor: \n");
for (i=0; i<M ;i++)
printf("%d \n", A[i]);
}
int main( )
{
fleitura(); // chamando fun��o leitura
printf ("\nA soma dos elementos e� %d \n", fsoma()); // chamando fsoma
fimprime( );
system("pause");
return 0;
}
