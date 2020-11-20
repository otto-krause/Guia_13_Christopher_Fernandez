#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int x=0;
    int y=1;
    int z=1;
    int i;
        printf ("1 ");
    for (i=1;i<10;i++)
    {

        z=x+y;

        x=y;
        y=z;
        printf (" %d ",z);
    }
    printf ("\n");
    system ("pause");
    return 0;
}
