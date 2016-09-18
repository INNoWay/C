#include <stdio.h>
int main(int argc, char *argv[])
{
  int mat[2][2];
  int x;
  int i;
  int j; 
  
  int ativ=0;
            
  printf("Digite o valor que deseja encontrar:");
  scanf("%i",&x);          
  
  for (i=0;i<=1;i++){        
        for (j=0;j<=1;j++){        
        printf("Digite o valor: ");
        scanf("%i",&mat[i][j]);   
        }
    }
    
    for (i=0;i<=1;i++){        
        for (j=0;j<=1;j++){        
        printf("%d ",mat[i][j]);
        }
        printf("\n"); 
    }
    
      for (i=0;i<=1;i++){        
        for (j=0;j<=1;j++){
            if (mat[i][j]==x){
            printf("Linha: %i\n",i);
            printf("coluna: %i\n",j);
            }
            if (mat[i][j]!=x){
            ativ=1;
            }                    
            }
        }
         if(ativ==1){
                 printf("Nao encontrado!!");
                }
    system("pause");
 
}

==========================================================================
==========================================================================
##include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int mat[3][3];
  int x;
  int i;
  int j;

  for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){
        
        printf("Digite o valor: ");
        scanf("%i",&mat[i][j]);
        
        }
    }
    for (i=0;i<=2;i++){           
        x=mat[0][i];
		mat[0][i]=mat[i][2];
		mat[i][2]=x;        
    }
    printf("\n");  
    
    for (i=0;i<=2;i++){
        for (j=0;j<=2;j++){
        printf("%i",mat[i][j]," ");        
        }
          printf("\n");         
    }
        
      system("pause");  

}

==========================================================================
==========================================================================
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int mat[3][3];
  int i;
  int j;

  for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){
        
        printf("Valor da Matriz: ");
        scanf("%i",&mat[i][j]);
        
        }
    }
    for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){           
        if(j>i){
		mat[i][j]=0;
		}       
    	}
	}
    printf("\n");  
    
    for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){ 
        printf("%i",mat[i][j]);        
        }
          printf("\n");         
    }
        
      system("pause");  

}

==========================================================================
==========================================================================
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int mat[3][3];
  int i;
  int j;
  int x;
  for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){
        
        printf("Valor da Matriz: ");
        scanf("%i",&mat[i][j]);
        
        }
    }
    for (i=0;i<=2;i++){ 
	for (j=0;j<=2;j++){        
     x=mat[i][j];          
     mat[i][j]=mat[i][2-j+1];
	 mat[i][2-j+1]=x;   
	}}
    printf("\n");  
    
    for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){ 
        printf("%i",mat[i][j]);        
        }
          printf("\n");         
    }
        
      system("pause");  

}

==========================================================================
==========================================================================

#include<stdio.h>
#include<stdlib.h>
int main( ){
int matriz[10][10];
int matriz2[10][10];
int vet[10];
int vet2[10]={0};
int i, j;

printf("%29s", "PRIMEIRA MATRIZ\n\n");
for (i=0;i<10;i++){        
        for (j=0;j<10;j++){
        
        printf("Valor da Matriz: ");
        scanf("%d",&matriz[i][j]);
        
        }
    }
printf("\n\n");
printf("%28s", "SEGUNDA MATRIZ\n\n");

for (i=0;i<10;i++){        
        for (j=0;j<10;j++){
        
        printf("Valor da Matriz: ");
        scanf("%d",&matriz2[i][j]);
        
        }
    }
printf("\n\n");
printf("%29s", "PRIMEIRA MATRIZ \n\n");
    for (i=0;i<10;i++){        
        for (j=0;j<10;j++){ 
        printf("%4d",matriz[i][j]);        
        }
          printf("\n\n");         
    }
printf("%28s", "SEGUNDA MATRIZ\n\n");
    for (i=0;i<10;i++){        
        for (j=0;j<10;j++){ 
        printf("%4d",matriz2[i][j]);        
        }
          printf("\n\n");         
    }
printf("Diagonal secundaria da primeira matriz: \n\n\n\n");

for(i=0;i<10;i++){
for(j=0;j<10;j++){
if(i+j==9){
vet[i]= matriz[i][j]; printf("%4d  ", vet[i]);
}
}
}
printf("\n\n\nDiagonal principal da segunda matriz: \n\n\n\n");

for(i=0;i<10;i++){
for(j=0;j<10;j++){
if(i==j){
vet2[i]= matriz2[j][i]; printf("%4d ", vet2[i]);
}
}
}
printf("\n\n");


for(i=0;i<10;i++){
for(j=0;j<10;j++){
if(i==j){
matriz[i][j]=vet2[i];
}
if(i+j==9){
matriz2[i][j]=vet[i];
}
}
}

printf("%26s","RESULTADOS\n");

printf("%29s", "PRIMEIRA MATRIZ\n\n");
for(i=0;i<10;i++){
for(j=0;j<10;j++){

printf("%4d", matriz[i][j]);
}
printf("\n\n");
}
printf("%28s", "SEGUNDA MATRIZ\n\n");
for(i=0;i<10;i++){
for(j=0;j<10;j++){

printf("%4d", matriz2[i][j]);
}
printf("\n\n");
}
printf("\n\n");

system("pause");
return 0;
}

==========================================================================
==========================================================================
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int mat[3][3];
  int i,j ,maior,soma;
  for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){        
        printf("Valor da Matriz: ");
        scanf("%i",&mat[i][j]);        
        }
    }
    printf(" MATRIZ \n\n");
    for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){ 
        printf(" %i ",mat[i][j]);        
        }
          printf("\n\n");         
    }
	soma=0;
	maior=mat[i][j];
	 for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){
		if(mat[i][j]>maior && i==j){
		maior=mat[i][j];
		}
		if(i+j== 2){
		soma=soma+mat[i][j];
		}
		}
		}
  printf("Maior: %i\n",maior);
  printf("Soma: %i",soma);
      system("pause"); 
	}

==========================================================================
==========================================================================

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int mat[3][3];
  int i,j;
  for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){        
        printf("Valor da Matriz: ");
        scanf("%i",&mat[i][j]);        
        }
    }
    for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){ 
        if(mat[i][j]>0){
        	printf("%4i",mat[i][j]," "); 
			}
			else{
			printf("%4i",mat[i][j]); 
			}
			}
			printf("\n\n"); 
        }                  
    printf("\n"); 
    for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){ 
        		if((mat[i][j]<0) && (i!=j) && (i+j!=2)){
       			mat[i][j]=0;
	   			}	   		
	   			}
	   		}
           for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){ 
        printf("%4i",mat[i][j]);        
        }
          printf("\n\n");         
    }
    printf("\n");
      system("pause"); 
	}

==========================================================================
==========================================================================

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int mat[5][2];
  int vet[5];
  int i,j;
  for (i=0;i<=4;i++){        
        for (j=0;j<=1;j++){        
        printf("Valor da Matriz: ");
        scanf("%i",&mat[i][j]);        
        }
    }
    for (i=0;i<=4;i++){ 
	vet[i]=(mat[i][1]*mat[i][2])/2;
	printf("%4i",vet[i]);
	}
    
    printf("\n");
      system("pause"); 
	}

==========================================================================
==========================================================================
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int mat1[3][3];
  int mat2[3][3];
  int i,j,x,m;
  printf("%28s", "PRIMEIRA MATRIZ\n\n");
  for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){        
        printf("Valor da Matriz 1: ");
        scanf("%i",&mat1[i][j]);        
        }
    }
    printf("%28s", "SEGUNDA MATRIZ\n\n");
     for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){        
        printf("Valor da Matriz 2: ");
        scanf("%i",&mat2[i][j]);        
        }
    }
    printf("%28s", "PRIMEIRA MATRIZ\n\n");
    for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		printf("%4d", mat1[i][j]);
		}
	printf("\n\n");
	}
	printf("%28s", "SEGUNDA MATRIZ\n\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		printf("%4d", mat2[i][j]);
		}
	printf("\n\n");
	}
    for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){  
        	for (x=0;x<=2;x++){        
        		for (m=0;m<=2;m++){
					if(mat1[i][j]==mat2[x][m]){
					printf("Valor: %i\n",mat1[i][j]);
					printf("Linha: %i\n",x);
					printf("Coluna:%i\n",m);
					}
    			}
			}
		}
	}
    
    printf("\n");
      system("pause"); 
	}

==========================================================================
==========================================================================

#include <stdio.h>
#include <stdlib.h>
main (){
	int dist[3][3];
	int cidade [3];
	int contdist=0,somaval=0,origem=0,dest=0;
	int i,j;
	for (i=0;i<=2;i++){        
        for (j=0;j<=2;j++){        
        printf("Valores das distancias : ");
        scanf("%i",&dist[i][j]);        
        }
    }
    printf("%28s", "Distancias\n\n");
    for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		printf("%4i",dist[i][j]);
		}
	printf("\n\n");
	}
		for (i=0;i<=2;i++){  
        printf(" Cidades: ");
        scanf("%i",&cidade[i]);        
    }
		  for (i=0;i<2;i++){
		    
			if (cidade[i] == dist[i][j]){
			somaval = somaval + dist[i][j];
			}
			printf("Distancia da viagen: %i\n",somaval);
		}
		system("pause"); 
}


==========================================================================
==========================================================================

#include <stdio.h> 
#include <stdlib.h> 

int main () 
{ 
int i, j, acertoAluno[5]; 
char respAlunos[5][5]; 
char gabarito[5] = "DBCDA"; 

for (i=0; i<=4; i++) { 
printf ("DIGITE O GABARITO DO ALUNO [%d]:\n",i+1); 
for (j=0; j<=4; j++) { 
printf("Questão: %d: ", j+1); 
scanf("%s",&respAlunos[i]); 
}
acertoAluno[i] = 0; 
for (j=0; j<=4; j++) { 
if (respAlunos[i][j] == gabarito[j+1]) { 
acertoAluno[i]++; 
} 
}
}
for (i=0; i<=4; i++) { 
printf ("\n aluno[%d] = %d",i+1,acertoAluno[i]); 
} 

printf ("\n\n\n"); 
system ("pause"); 
return 0; 
}

==========================================================================
==========================================================================

#include<stdio.h> 
#include<stdlib.h> 

main() 
{ 
int x=5,y=5;
int i, j,flag, flag2,tamanho; 
char matriz2[x][y], matriz[x][y]; 
printf ("%28s","MATRIZ 1 "); 
for (i = 0; i <= 4; i++){  
printf ("\n STRING %d: ", i+1); 
fflush(stdin); 
gets(matriz[i]); 
printf ("\n"); 
tamanho = strlen(matriz[i]); 
	if (tamanho != x){
	printf ("\n"); 
	printf ("\n A STRING DEVE TER %d CARACTERES!",x); 
	}
}
printf ("%28s","MATRIZ 2 ");
for (i = 0; i <= 4; i++){ 
printf ("\n STRING %d: ", i+1); 
fflush(stdin); 
gets(matriz2[i]); 
printf ("\n\n"); 
tamanho = strlen(matriz2[i]); 
	if (tamanho != x){ 
	printf ("\n"); 
	printf ("\n A STRING DEVE TER %d CARACTERES!",x);  
	}  
}
flag = 1; 
for (i = 0; i <= 4; i++){ 
	for (j = 0; j <= 4; j++){ 
		if (matriz[i][j] != matriz[x-(i+1)][y-(j+1)]){ 
		flag = 0; 
		} 
	} 
} 
flag2 = 1; 
for (i = 0; i <= 4; i++){  
	for (j = 0; j <= 4; j++){  
		if (matriz2[i][j] != matriz2[x-(i+1)][y-(j+1)]){ 
		flag2 = 0; 
		} 	
	} 
} 

if ((flag == 1)||(flag2 == 1)){  
	if (flag == 1){ 
	printf ("A MATRIZ 1 E PALINDROMO!\n"); 
	} 
		if (flag2 == 1){ 
		printf ("A MATRIZ 2 E PALINDROMO!\n"); 

		} 
		}else{ 
		printf ("AS MATRIZES NFORMADAS NAO SAO PALINDROMOS\n"); 
		} 
	system ("pause");
}


================================================================================
