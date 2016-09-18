#include <stdio.h>
#include <stdlib.h>

struct ttempo
{
       int hor;
       int min;
       int seg;
       };
int main(int argc, char *argv[])
{
    struct ttempo temp;
    int totseg,resto;
    printf(" Digite total de segundo:");
    scanf("%d",&totseg);
    temp.hor=totseg/3600;
    resto=totseg%3600;
    temp.min=resto/60; 
    temp.seg=resto%60;
    printf("  hora:%d",temp);
    printf(" minuto%d:",resto);
    printf(" segundo%d:",temp);
  system("PAUSE");	
  return 0;
}
