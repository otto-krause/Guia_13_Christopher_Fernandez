#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[4], i, asc=0, desc=0;
    for(i=0;i<5;i++){
        printf("Ingrese un numero de la lista: ");
        scanf("%d",&numero[i]);
    }
    for (i=0;i<4;i++){
        if(numero[i]<=numero[i+1]){
            asc++;
        }
        if(numero[i]>=numero[i+1]){
            desc++;
        }
    }
    if (asc==4){
        printf("Ascendente\n");
    }
    else
    {
        if (desc==4){
            printf("Descendiente\n");
        }
        else
            printf("Desordenada\n|");

    }

    printf("Suma entre extremos %d",numero[0]+numero[4]);

    return 0;
}
