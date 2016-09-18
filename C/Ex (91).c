#define N 5
struct tcurso { 
int cand;
int vaga;
float conc;
};
void fleitura( struct tcurso v[]){
int i;
printf("\n----Digite dados do Curso---%d \n", N);
    for (i = 0; i < N; i++){
    printf(" \nVagas e candidatos do curso %d: \n",i);
    scanf ("%d", &v[i].vaga);
    scanf ("%d", &v[i].cand);
    }
}
void fcalcula_conc( struct tcurso v[]){ 
    int i;
    for(i=0;i<N;i++)
       v[i].conc = (float) v[i].cand / v[i].vaga;
}
int ftotaliscritos(struct tcurso v[]){
    int i;
    int soma=0;
    for (i=0; i < N; i++)
        soma = soma + v[i].cand;
        return soma;
}
int ftotalvaga(struct tcurso v[]){
    int i;
    int total=0;
    for(i=0;i<N;i++)
        total = total + v[i].vaga;
    return total;
}
float fconculta(int c ,struct tcurso v[]){
    return v[c].conc;
}
int fmaiorconc(struct tcurso v[]){
    int i,indmaior;
    float maior;
    maior=v[0].conc;
    indmaior=0;
    for(i=0;i<N;i++)
        if(v[i].conc>maior){
        maior=v[i].conc;
        indmaior=i;
        }
    return indmaior;
}
int main( )
{
int curso;
struct tcurso vet[N]; 
fleitura(vet);
fcalcula_conc(vet);
printf("total inscritos:%d\n",ftotaliscritos(vet));
printf("total de vagas:%d\n",ftotalvaga(vet));
printf("Digite um curso para saber a concorrencia:");
scanf("%d",&curso);
printf("total de vagas:%f\n",fconculta(curso,vet));
printf("curso mais concorrido:%d\n",fmaiorconc(vet));
system("PAUSE");
return 0;
}
