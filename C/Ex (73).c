#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 2*N
int a[N];
int b[N];
int c[N];
int d[N];
void fleituraA()
{
     int i;
     printf("Digiteos elementos:%d\n",N);
     for(i=0;i<N;i++)
     scanf("%d",&a[i]);
     }
void fleituraB()
{
     int i;
     printf("Digiteos elementos:%d\n",N);
     for(i=0;i<N;i++)
     scanf("%d",&b[i]);
     }
void fsomaAB()
{
     int i;
     for(i=0;i<N;i++)
     c[i]=a[i]+b[i];
     }
void fconcatenaAB()
{
     int i,j;
  for(i=0;i<N;i++)
  d[i]=a[i];
     for(j=0;j<N;j++)
     d[i]=b[j];
     i++;
     
     }
void fimprimiC()
{
     int i;
     printf("Vetor C:");
     for(i=0;i<N;i++)
     printf("%d",c[i]);
     }
void fimprimiD()
{
     int i;
     printf("Vetor D:");
     for(i=0;i<M;i++)
     printf("%d",d[i]);
     }
int main(int argc, char *argv[])
{
    fleituraA();
    fleituraB();
    fsomaAB();
    fimprimiC();
    fimprimiD();
  system("PAUSE");	
  return 0;
}
