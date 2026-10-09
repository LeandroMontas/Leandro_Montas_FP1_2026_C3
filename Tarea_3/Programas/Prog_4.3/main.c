#include <stdio.h>
#include <stdlib.h>

//Conflicto de variables con el mismo nombre.

void f1(void);
int K = 5;

int main()
{
    int I;
    for(I=1; I<=3; I++)
    {
        f1();
    }
}

void f1(void)
{
    int K = 2;
    K += K;
    printf("\n\nEl valor de la variable local es: %d", K);
    ::K = ::K + K;
    printf("\nEl valor de la variable global es: %d", ::K);
}

/* Mensaje para el profesor: El programa no queria correr cuando lo intente y segun lo que veo en paginas
como Stack Overflow es que esto podria ser un error en el libro y la expresion :: es de C++ no de C */
