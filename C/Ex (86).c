#include <stdio.h>
#include <stdlib.h>
#define N 5
struct taluno{
       int matricula;
       char sexo[1];
       int idade;
       float media;
       };
void fleitura(struct taluno v[]){
     int i;
     printf("\n----Digite dados do Aluno--- \n");
        for (i = 0; i < N; i++){
           printf(" \n Entre com matricula do aluno : \n");
           scanf ("%d", &v[i].matricula);
           printf(" \n Entre com sexo do aluno : \n");
           gets (v[i].sexo);
           printf(" \n Entre com idade do aluno : \n");
           scanf ("%d", &v[i].idade);
           printf(" \n Entre com media do aluno : \n");
           scanf ("%f", &v[i].media);
    }
}
int fmaiormedia(struct taluno v[]){
     float maior;
     maior=v[0].media;
     int i,maiormedia=0;
         for(i=0;i<N;i++)
         if(v[i].media>maior){
            maior = v[i].media;
            maiormedia = i;
         }
         return maiormedia;
}
int fidadefer(struct taluno v[]){ 
     float mediaf=0;
     float soma=0,media;
     int i;
        for(i=0;i<N;i++){
         if(v[i].sexo=="f"){
            mediaf++; 
            soma=soma+v[i].idade;
         }
         media=soma/mediaf;
         }
   return media;
}
float fmediasala(struct taluno v[]){
     float media,soma=0;
     int i;
      for(i=0;i<N;i++){
        soma = soma+v[i].media;
        media=soma/N;
         }
         return media;
}
float facimamed(float med,struct taluno v[]){
      
      int i;
      float cont=0;
      float porcent;
      
      for(i=0;i<N;i++)
      if (v[i].media>med){
      cont++;
      porcent=cont*100.0/N;
      }
      return porcent;
}
      
int main(int argc, char *argv[]){
    float med;
    int ind;
struct taluno vet[N]; 
fleitura(vet);
ind=fmaiormedia(vet);
printf("maior media:%d\n",vet[ind].matricula);
printf("media de idade ferminina:%d\n",fidadefer(vet));
printf("media da sala:%f\n",fmediasala(vet));
med=fmediasala(vet);
printf("total acima da media:%f\n",facimamed(med,vet));  
  system("PAUSE");	
  return 0;
}
