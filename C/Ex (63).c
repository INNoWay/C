#include <stdio.h>
#include <stdlib.h>
       struct tproduto 
            { //definiçao
            char nome[15];
            int quant;
            float preco;
            };
       struct tproduto p1,p2; //declaraçao
       void fleitura()
            {
            printf("Dados do primeiro produto:\n");
            printf("Digite nome:");
            fflush(stdin);gets (p1.nome);
            printf("Digite quantidade:");
            scanf("%d",&p1.quant);
            printf("Digite preco:");
            scanf("%f",&p1.preco);
            }
       void fmaiorquant()
            { if (p1.quant>p2.quant)
              printf("%s esta em maior quantidade\n",p1.nome);
              else printf("%s esta em maior quantidade\n",p2.nome);
            }
       float fcapital()
            {
            float tot;
            tot=p1.quant*p1.preco+p2.quant*p2.preco;
            return(tot);
            }

int main(int argc, char *argv[])
{
    fleitura();
    fmaiorquant();
    printf("capital maior investido%f\n",fcapital());
  
  system("PAUSE");	
  return 0;
}
