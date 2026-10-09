#include <stdio.h>
#include <stdlib.h>

/* Incremento de precio.
El programa, al recibir como dato el precio de un producto, incrementa al mismo 11% si es menor a $1500 y
8% en caso contrario.

PRE y NPR: variables de tipo real. */

int main()
{
    float PRE, NPR;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &PRE);
    if (PRE < 1500)
    {
        NPR = PRE * 1.11;
        printf("\n El nuevo precio es: %8.2f", NPR);
    }else
    {
        NPR = PRE * 1.08;
        printf("\n El nuevo precio es: %8.2f", NPR);
    }

}
