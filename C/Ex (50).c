#include <stdio.h>
#include <stdlib.h>
int n;
void fsoma(){
     float s;
     s=n+n*n;
     printf ("S:%f\n",s);
     }
int main(int argc, char *argv[])
{
     printf("entre com valor de N:");
     scanf("%d",&n);
     fsoma();
  
  system("PAUSE");	
  return 0;
}
