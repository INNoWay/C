#define M 5 //constante
     int A[M]; // o tamanho do vetor é M – vetor é uma variável global
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
void fimprimeinv()
{
     int i;
     printf("vetor na ordem inversa:\n");
     for(i=M-1;i>=0;i--)
     printf("%d",A[i]);
     }
 int fmenor()
{
     int i,menor;
     menor=A[0];
     for(i=0;i<M;i++)
     if (A[i]<menor)
     menor=A[i];  
     return menor;
     }
int main( )
{
    fimprimeinv();
    fleitura(); // chamando função leitura
    printf ("\nA soma dos elementos e´ %d \n", fsoma());// chamando fsoma
    printf ("\n menor valor e´ %d \n", fmenor()); 
    fimprime( );
    
system("pause");
return 0;
}
