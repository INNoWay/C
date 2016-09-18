#include <stdio.h>
#include <stdlib.h>
# define N 5
 int X[N];
 int Y[N];
 void fleitura( )
{
     int i;
     for(i=0;i<N;i++){
     printf(" Digite os valores:%d \n",i);
     scanf("%d",&X[i]);
     }
}
 void fcopiainv( )
{      
     int j=N-1,i;
     for(i=0;i<N;i++){
     Y[j]=X[i];
     j--; 
}
}
void fimprime()
{
     int i;
     printf("Valor invertido:\n");
     for(i=0;i<N;i++)
       printf("%d",Y[i]);
       }
int main(int argc, char *argv[])
{
  fleitura();  
  fcopiainv();
  fimprime();
  system("PAUSE");	
  return 0;
}
