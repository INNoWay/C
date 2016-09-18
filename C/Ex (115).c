//Leitura, ordenação e escrita

/* Leia 4 notas bimestrais do 8 alunos, apresentando no
final os dados dos alunos classificados por nome. A ordenação
é feita com base no nome de cada aluno e quando estiver fora 
da ordem, os dados devem ser trocados de posição. */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct Aluno{
    char nome[40];
    float nota[4];
};

main(){
   struct Aluno Aluno[8],x;
   
   int i,j;
   float nota_alu;
   printf("\n\nCadastro de Aluno\n\n");
   //Entrada de dados
   for (j=0; j<=7; j++){
       printf("Informe o nome do %do. Aluno: ",j+1);
       fflush(stdin);
       fgets(Aluno[j].nome,40,stdin);
       for (i=0; i<=3; i++)
       {
           printf("Informe a %da. nota: ",i+1);
           fflush(stdin);
           scanf("%f",&nota_alu);
           Aluno[j].nota[i]=nota_alu;
       }    
   }    
   
   //Classificação de Dados
   //strcmp = compara palavra1 com palavra2
   for (i=0; i<=6; i++){
       for (j=i+1; j<=7; j++)
       {
           if (strcmp(Aluno[i].nome, Aluno[j].nome) > 0)
           {
              //faz a troca                       
              x=Aluno[i];
              Aluno[i]=Aluno[j];                        
              Aluno[j]=x;
           }                          
       }    
   }    

   //Saída dos dados
   for (j=0; j<=7; j++){
       printf("\nNome: ");
       puts(Aluno[j].nome);
       for (i=0; i<=3; i++){
           printf("Nota %da: %6.2f\n", i+1, Aluno[j].nota[i]);
       }
   }
   printf("\n\n\n");    
   system("pause");    
   
}
