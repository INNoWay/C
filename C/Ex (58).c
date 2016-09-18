#include <stdio.h>
#include <stdlib.h>
int fquadra(int num){
     int res;
     res=num*num;
     return res;
     }
int fcubo(int num){
     int res;
     res=num*num*num;
      return res;
     }
int main (){
      
    int a;
    printf("entre com numero:");
    scanf("%d",&a);
    printf("rais quadrada:%d\n",fquadra(a));
    printf("rais cubica:%d\n  ",fcubo(a));
  system("PAUSE");	
  return 0;
}
