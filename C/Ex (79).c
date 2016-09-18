#include <stdio.h>
#include <stdlib.h>
#define n 5
void fleitura(int v[]){
     int i;
     for(i=0;i<n;i++){
     printf("curso=%d",i);
     scanf("%d",&v[i]);
     }
}
void fcalculaconc(int v1[],int v2[],float v3[]){
     int i;
     for (i=0;i<n;i++)
         v3[i]=(float)v2[i]/v1[i];
}
float fconsulta(int curso,float v3[]){
      return v3[curso];
      }
int  fmaiorconc(float v3[]){
     int indmaior,i;
     float maior;
     maior=v3[0];
     indmaior=0;
     for(i=0;i<n;i++)
     if(v3[i]>maior){
        maior=v3[i];
        indmaior=i;
     }
     return indmaior;
}
int main()
{
    int vagas[n],cand[n];
    float conc[n];
    int curso;
    printf("Forneça as vagas de cada curso:\n");
    fleitura(vagas);
    printf("Forneça o numero de candidato para cada curso:\n");
    fleitura(cand);
    fcalculaconc(vagas,cand,conc);
    printf("Digite o curso para consulta:");
    scanf("%d",&curso);
    printf("Concorrencia=%.2f\n:", fconsulta(curso,conc));
    printf("curso mais concorrido=%d",fmaiorconc(conc));
      
  system("PAUSE");	
  return 0;
}
