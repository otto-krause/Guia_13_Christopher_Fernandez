#include <stdio.h>
#include <stdlib.h>

int main()
{
    int persona[20], i;

    for(i=0;i<20;i++){
        printf("Ingrese el sueldo de la persona nro %d: ",i+1);
        scanf("%d",&persona[i]);

    }
    printf("\n\n\n");

    printf("Las siguientes personas ganan MAS de 2.000\n");
    for(i=0;i<20;i++){
        if (persona[i]>=2000)
            printf(" per. nro %d, con %d\n",i+1, persona[i]);
    }

    printf("Y las siguientes personas ganan MENOS de 2.000\n");
    for(i=0;i<20;i++){
        if (persona[i]<2000)
            printf(" per. nro %d, con %d\n",i+1, persona[i]);
    }

    return 0;
}
