#include <stdio.h>
#include <stdlib.h>

/* Cubo-2.
El programa calcula el cubo de los 10 primeros numeros naturales con la ayuda de una funcion.

Observa lo que sucede en la solucion al declarar una variable local dentro de la funcion de cubo. */

int cubo(void);
int I;

int main()
{
    int CUB;
    for (I=1; I<=10; I++)
    {
        CUB = cubo();
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}

int cubo(void)
{
    int I = 2;
    return (I*I*I);
}
