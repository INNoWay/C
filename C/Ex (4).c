#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float z;
    int x =8, y= 3;
    z=(float) x/y; //real = int/int
    printf ("valor de z=%f \n",z);
    z= x/y; //real = int/int
    printf ("valor de z=%f \n",z);
    system("PAUSE");	
  return 0;
}
