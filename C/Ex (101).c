/* Calculo da media de 3 alunos com 4 notas */

#include <stdio.h>
#include <stdlib.h>

main()
{
   float md[3][4], numero;
   int i,j;
   
   printf("\nLeitura e apresentacao de notas\n");      
   
   /* Entrada de dados */
   
   for(i=0; i<=2; i++)
   {
      printf("\nInforme as notas do %do. aluno: \n\n", i+1);
      for(j=0; j<=3; j++)
      {
         printf("Nota %d: ", j+1);
         scanf("%f", &numero);
         md[i][j]=numero;     
      }
   }            
   
   /* Saida das notas */
   for(i=0; i<=2; i++)
   {
      printf("\nAs notas do aluno %d sao: \n\n", i+1);
      for(j=0; j<=3; j++)
      {
         printf("Nota %d: %5.2f\n", j+1, md[i][j]);
      }
   }
   
   system("pause");      
}
