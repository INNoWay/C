#include <stdio.h>
#include <stdlib.h>
struct TAluno {
       int matric;
       char sexo;
       int idade;
       float medglob;
       };
       
int main(int argc, char *argv[])
{
  struct TAluno A, B;
  printf("---- Leitura de dados do aluno A---- \n");
  printf("Digite matricula: ");
  scanf("%d", &A.matric);
  printf("Digite sexo (m/f): ");
  A.sexo = getche();
  printf("\nDigite idade: ");
  scanf("%d", &A.idade);
  printf("Digite media global: ");
  scanf("%f", &A.medglob);
  
  printf("\n---- Leitura de dados do aluno B---- \n");
  printf("Digite matricula: ");
  scanf("%d", &B.matric);
  printf("Digite sexo (m/f): ");
  B.sexo = getche();
  printf("\nDigite idade: ");
  scanf("%d", &B.idade);
  printf("Digite media global: ");
  scanf("%f", &B.medglob);
  
  printf("\n---- Dados do aluno A---- \n");
  printf("Matricula:  %d ", A.matric);
  printf("--- Sexo: %c ", A.sexo);
  printf("--- Idade: %d ", A.idade);
  printf("--- Media global: %.2f \n\n", A.medglob);
  
  printf("\n---- Dados do aluno B---- \n");
  printf("Matricula:  %d ", B.matric);
  printf("--- Sexo: %c ", B.sexo);
  printf("--- Idade: %d ", B.idade);
  printf("--- Media global: %.2f \n\n", B.medglob);
  
  if (A.idade > B.idade)
      printf("\n Aluno mais velho = %d \n", A.matric);
  else if (A.idade < B.idade)
           printf("\n Aluno mais velho = %d \n", B.matric);
        else printf("\n Alunos de mesma idade = %d, %d \n", A.matric, B.matric);
        
   if (A.medglob > B.medglob)
      printf("\n Aluno com maior media = %d \n", A.matric);
   else if (A.medglob < B.medglob)
           printf("\n Aluno com maior media = %d \n", B.matric);
        else printf("\n Alunos de mesma media = %d, %d \n\n", A.matric, B.matric);
              
  system("PAUSE");	
  return 0;
}
