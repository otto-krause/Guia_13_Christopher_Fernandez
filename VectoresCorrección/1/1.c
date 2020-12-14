#include <stdio.h>
#include <stdlib.h>

int main()
{
   int resistencia[5]={0}, i, total=0;
    printf("Ingrese 5 resistencias:\n");
    for(i=0; i<5; i++)
        scanf("%d",&resistencia[i]);

    for(i=0; i<5; i++){
        if(i!=0)
            printf(" +");
        printf(" %d",resistencia[i]);
        total += resistencia[i];
    }
    printf(" = %d",total);

    return 0;
}
