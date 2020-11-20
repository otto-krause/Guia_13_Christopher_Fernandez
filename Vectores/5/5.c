#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int a[20];
 int i;
 int j=0;
 int numero1=0;
 for (i=1;i<21;i++)
 {
     printf ("Ingresar unidad vendida del vendedor %i:",i);
     scanf ("%i",&a[i]);
     j=j+a[i];

 if (a[i]>numero1)
 {
     numero1=a[i];
 }
 }

printf ("\nLas unidades vendidas en total son %d \n ",j);
printf ("\nEl vendedor con mayor venta diaria tiene %d",numero1);
system ("pause");
return 0;
}

