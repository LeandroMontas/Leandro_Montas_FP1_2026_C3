#include <stdio.h>
#include <stdlib.h>

/* Prueba de variables globales, locales y estaticas.
El programa utiliza funciones en las que se usan diferentes tipos de variables. */

int f1(void);
int f2(void);
int f3(void);
int f4(void);

int K = 3;

int main()
{
    int I;
    for(I=1; I<=3; I++)
    {
        printf("\nEl resultado de la funci�n f1 es: %d", f1());
        printf("\nEl resultado de la funci�n f2 es: %d", f2());
        printf("\nEl resultado de la funci�n f3 es: %d", f3());
        printf("\nEl resultado de la funci�n f4 es: %d", f4());
    }
}

int f1 (void)
{
    K += K;
    return (K);
}

int f2(void)
{
    int K = 1;
    K++;
    return(K);
}

int f3(void)
{
    static int K = 8;
    K += 2;
    return(K);
}

int f4(void)
{
    int K = 5;
    K = K + ::K;
    return (K);
}

/* Mensaje para el profesor: El programa no queria correr cuando lo intente y segun lo que veo en paginas
como Stack Overflow es que esto podria ser un error en el libro y la expresion :: es de C++ no de C */
