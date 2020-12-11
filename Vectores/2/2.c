#include <stdio.h>
#include <stdlib.h>
//No utiliza funciones.
int main()
{
    int numero[5]={0}, i, mayor=0;//idem ejercicio anterior.
    float  promedio=0;
    printf("Ingrese 5 valores: \n");
    for(i=0; i<5; i++)
        scanf("%d",&numero[i]);

    for(i=0; i<5; i++)
    {
        promedio += numero[i];
        if (numero[i]>mayor)
            mayor=numero[i];
    }
    promedio = promedio/5;

    printf("El numero mas alto es %d\n",mayor);
    printf("El promedio es %.2f",promedio);

    return 0;
}
