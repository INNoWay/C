#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int idade;
    char sexo,m=0,f=0;
    float somam=0,somaf=0,medm,medf;
    printf("entre idade da pessoa ");
    scanf("%d",&idade);
       while(idade !=0){
       
    printf("entre com sexo da pessoa ");
       sexo= getche();  
if (sexo==m){
m++;
somam=somam+idade;
}
else 
{f++;
somaf=somaf+idade;
}
printf("\n Entre idade da pessoa ");
       scanf("%d",& idade);
       }
medm=somam/m;
medf=somaf/f;
 printf("media masculina: %f\n",medm);
 printf("media ferminina: %f\n",medf);      
 
  
  system("PAUSE");	
  return 0;
}
