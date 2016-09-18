#include <stdio.h>
#include <stdlib.h>

int a,b,c;
  int fmaior(){
     int maior;
     if (a>b && a>c) {
     maior=a;
     printf("maior:%d\n",maior);
     }
     
     else if (b>c && b>a) {
          maior=b;
          printf("maior:%d\n",maior);
          }
          else if (c>a && c>b) {
               maior=c;
               printf("maior:%d\n",maior);
               }
          return maior;
               }
 int fmenor(){
     int menor;
     if (a<b && a<c) {
     menor=a;
     printf("menor:%d\n",menor);
     }
     else if (b<c && b<a) {
          menor=b;
          printf("menor:%d\n",menor);
          }
          else if (c<a && c<b) {
               menor=c;
               printf("menor:%d\n",menor);
               }
          return menor;
          }
float fmedia(){
     int media;
     media=(a+b+c)/3;
     printf("media:%d\n",media);
     return media;
               }
 int main( )              
{
  float total1,total2,total3; 
printf ("entre com tres nota:");
scanf("%d %d %d",&a, &b, &c);
 total1=fmaior();
 total2=fmenor();
 total3=fmedia();              
  system("PAUSE");	
  return 0;
}
