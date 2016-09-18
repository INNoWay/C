#include <stdio.h>
#include <stdlib.h>

int num;
float fquadra(){
     int res;
     res=num*num;
     return res;
     }
float fcubo(){
     int res;
     res=num*num*num;
      return res;
     }
int main (){
      
    float tot1,tot2;
    printf("entre com numero:");
    scanf("%d",&num);
    tot1=fquadra();
    tot2=fcubo();
    printf("rais quadrada:%d\n",fquadra());
    printf("rais cubica:%d\n  ",fcubo());
  system("PAUSE");	
  return 0;
}
