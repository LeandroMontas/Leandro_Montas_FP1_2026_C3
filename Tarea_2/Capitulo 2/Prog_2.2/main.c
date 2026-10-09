#include <stdio.h>
#include <stdlib.h>

/* Incremento de precio.
El programa, al recibir como dato el precio de un producto importado,
incrementa 11% el mismo si este es inferior a $1500.
PRE y NPR: Variable de tipo real*/

int main()
{
    float PRE, NPR;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &PRE);
    if (PRE < 1500)
    {
        NPR = PRE * 1.11;
        printf("\nEl nuevo precio es: %7.2f", NPR);
    }
}
