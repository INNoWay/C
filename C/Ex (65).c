#include <stdio.h>
#include <stdlib.h>
int fsoma(int a,int b,int c)
{
     int soma;
     soma=a+b+c;
     return soma;
}
int fmenor(int a,int b,int c)
{
  int menor;
     if(a<b && a<c){
     menor=a;
     }
     else if (b<c){
           menor=b;
           }
          else{ 
          menor=c;
          }
     return menor;
}
float fmedia(int a,int b,int c)
{
  float media;
  media=(float)(a+b+c)/3;
  return media;
}
int main(int argc, char *argv[])
{
    int a,b,c;
    printf("Digite tres valores:");
    scanf("%d%d%%d",&a,&b,&c);
    printf("Soma dos valores:%d\n",fsoma(a,b,c));
    printf("menor valor:%d\n",fmenor(a,b,c));
    printf("media:%f\n",fmedia(a,b,c));
  
  system("PAUSE");	
  return 0;
}
