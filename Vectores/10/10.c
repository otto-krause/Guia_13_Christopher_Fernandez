#include <stdlib.h>
#include <stdio.h>

int main(){
int j=0;
int i;
int a[10];
int p=1;
int cant=0;
float promedio=0;
printf ("Introducir 10 numeros : ");
    for(i=0;i<10;i++)
    {
        scanf("%i",&a[i]);
        j=j+a[i];
        p=p*a[i];
    }

     promedio=j/10;
     for (i=0; i<10;i++)
     {
      if (a[i]<promedio)
        {
            cant++;
        }
     }

            printf ("\n La suma es %d ",j);
            printf ("\n El producto es %d ",p);
            printf ("\n El promedio es %.2f ",promedio);
            printf ("\nLos elementos que estan abajo del promedio son %d ",cant);



system ("pause");
return 0;
}


