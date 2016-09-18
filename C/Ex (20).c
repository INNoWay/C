#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ddi;
    printf("Entre com ddi: ");
    scanf("%d",&ddi);
    switch (ddi)
    {
           case 1 : printf ("EUA\n");        break;
           case 49: printf ("alemanha\n");  break;
           case 54: printf ("argentina\n");break;
           case 55: printf("brasil\n");          break;
           case 35: printf("portugal\n");break;
           default: printf("DDI inesistente\n");
           }
  
  system("PAUSE");	
  return 0;
}
