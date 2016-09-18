#include <stdio.h>
int main ()
{
int mtrx [3][5];
int i, j, count;
count=1;
for (i=0;i<3;i++)
for (j=0;j<5;j++)
{
mtrx[i][j]=count;
count++;
}
system("PAUSE");
return(0);
}
