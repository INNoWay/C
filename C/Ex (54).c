#include <stdio.h>
#include <stdlib.h>
int n;
int fsoma(){
     int s=0,i;
     for(i=1;i<=n;i++){
     s=s+i*i;
     }
     return s;
     }
int main(int argc, char *argv[])
{
    int a;
     printf("entre com valor de N:");
     scanf("%d",&n);
     a=fsoma();
     printf ("Soma:%d\n",a);
  system("PAUSE");	
  return 0;
}
