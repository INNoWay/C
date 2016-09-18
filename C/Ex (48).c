#include <stdio.h>
#include <stdlib.h>
int funcaoA( )
{ int res =0;
printf(" Estamos na funcao A \n: ");
return res;
}
int funcaoB( )
{ int res = 1;
printf(" Estamos na funcao B \n: ");
return res;
}
int main( )
{
int r;
printf(" Estamos em main \n");
r = funcaoA( );
printf(" Funcao A retornou %d \n", funcaoA);
r = funcaoB( );
printf(" Funcao B retornou %d \n", funcaoB);
getch();
return 0;
}
