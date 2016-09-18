#include "stdio.h"
#include "stdlib.h"

struct Aluno{
    char nome[40];
    float nota[4];
};

main(){
   struct Aluno Aluno[5];
   
   int indice_nota,indice_nome;
   float nota_alu;
   printf("\n\nCadastro de Aluno\n\n");
   for (indice_nome=0; indice_nome<=4; indice_nome++){
       printf("Informe o nome do %do. Aluno: ",indice_nome+1);
       fflush(stdin);
       fgets(Aluno[indice_nome].nome,40,stdin);
       for (indice_nota=0; indice_nota<=3; indice_nota++)
       {
           printf("Informe a %da. nota: ",indice_nota+1);
           fflush(stdin);
           scanf("%f",&nota_alu);
           Aluno[indice_nome].nota[indice_nota]=nota_alu;
       }    
   }    
   
   for (indice_nome=0; indice_nome<=4; indice_nome++){
       printf("\nNome: ");
       puts(Aluno[indice_nome].nome);
       for (indice_nota=0; indice_nota<=3; indice_nota++){
           printf("Nota %da: %6.2f\n", indice_nota+1, Aluno[indice_nome].nota[indice_nota]);
       }
   }
   printf("\n\n\n");    
   system("pause");    
   
}