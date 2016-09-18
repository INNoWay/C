#define N 5 //constante
     float nota[N]; 
void fleitura( )
{
     int i;
     for(i=0;i<N;i++){
     printf(" Digite as notas dos alunos:%d \n",i);
     scanf("%f",&nota[i]);
     }
}

float fmedia( ) 
{
     int i;
     float media,soma;
     soma=0;
     for (i=0; i < N; i++)
     soma=soma+nota[i];
     media=soma/N;
     return media;
     }
float facimamedia(float med) 
{
     int i,cont=0;
     float porcent;
     for(i=0;i<N;i++){
     if (nota[i] > med)
     cont++;
     porcent=cont*100/N;
     return porcent;
     }
}
int main( )
{
    float med;
    fleitura(); // chamando função leitura
    fmedia();
    printf ("\n Total acima da media : %f \n", facimamedia(med));
    printf ("\n A media e: %f \n",fmedia());// chamando fmedia 
    
    
system("pause");
return 0;
}
