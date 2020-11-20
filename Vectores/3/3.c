#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0, numero2=0, i, j=0, max=-1;


    printf("Ingresar 2 numeros: ");
    scanf("%d %d",&numero,&numero2);
    if (numero<numero2){
        for (i=numero;i<numero2;i++)
            max++;
    }
    else{
        for (i=numero2;i<numero;i++)
            max++;
    }
    int inter[max];


    if (numero<numero2){
        for (i=numero+1;i<numero2;i++){
            inter[j++]=i;
        }
    }
    else{
        for (i=numero2+1;i<numero;i++){
            inter[j++]=i;
        }
    }

    for (i=0;i<max;i++){
        printf(" %d ", inter[i]);
    }

    return 0;
}
