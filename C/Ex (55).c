#include <stdio.h>
#include <stdlib.h>
int n;
float fsoma2(){
     float s=0;
     int i,x;
     x=n;
     for(i=1;i<=n;i++){
     s=s+(float)i/x;
     x--;
     }
     return s;
     }
int main(int argc, char *argv[])
{
   
     printf("entre com valor de N:");
     scanf("%d",&n);
     printf ("Soma:%f\n",fsoma2());
  system("PAUSE");	
  return 0;
}
