#include <stdio.h>
#include <stdlib.h>
//No utiliza función.
int main()
{
    int resistencia[5]={0}, i, total=0;//de 0 a 4 el vector tiene 5 lugares.
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
