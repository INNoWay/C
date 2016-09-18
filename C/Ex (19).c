#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ddi;
    printf("Entre com ddi: ");
    scanf("%d",&ddi);
    if (ddi ==1) printf ("EUA\n");
    else if (ddi ==49) printf ("alemanha\n");
         else if (ddi ==54) printf ("argentina\n"); 
              else if (ddi ==55) printf("brasil\n");
                   else if(ddi ==35) printf("portugal\n");
                        else if(ddi ==35) printf("DDI inesistente\n");
  
  system("PAUSE");	
  return 0;
}
