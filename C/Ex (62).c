#include <stdio.h>
#include <stdlib.h>
long fatorial(int n){
     long s=1;
     int i;
     for(i=n;i>=1;i--){
     s=i+s;
     }
     return s;
     }
int main()
{
   int n;
     printf("entre com valor de N:");
     scanf("%d",&n);
     printf ("Fatorial:%ld\n",fatorial(n));
  system("PAUSE");	
  return 0;
}
