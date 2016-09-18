/*
#include "stdio.h"
#include "stdlib.h"

int multiplicacao(int n,int ate){
       if (ate<0){
           return 1;        
       }
       else{
           printf ("%d X %d = %d\n", n, ate, n*ate);
           return multiplicacao(n,ate-1);     
       }
}

main()
{
      int n;
      int ate=10;
      printf ("Informe a qual tabuada:\n");
      scanf ("%d", &n);
      multiplicacao(n,ate);
      system("pause");   
}
*/

#include "stdio.h"
#include "stdlib.h"

int multiplicacao(int n,int ate){
       if (ate>10){
           return 1;        
       }
       else{
           printf ("%d X %d = %d\n", n, ate, n*ate);
           return multiplicacao(n,ate+1);     
       }
}

main()
{
      int n;
      int ate=0;
      printf ("Informe a tabuada:\n");
      scanf ("%d", &n);
      multiplicacao(n,ate);
      system("pause");   
}
