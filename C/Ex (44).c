#include <stdio.h>
#include <stdlib.h>

int num;
void fquadra(){
     int res;
     res=num*num;
     printf("rais quadrada:%d\n",res);
     }
void fcubo(){
     int res;
     res=num*num*num;
     printf("rais cubica:%d\n  ",res);
     }
int main (){
    printf("entre com numero:");
    scanf("%d",&num);
    fquadra();
    fcubo();
  system("PAUSE");	
  return 0;
}
