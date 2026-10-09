#include <stdio.h>
#include <stdlib.h>

/* Prueba de parametros por referencia */

void f1(int *);

void main(void)
{
    int I, K=4;
    for(I=1; I<=3; I++)
    {
        printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
        printf("\nValor de K despues de llamar a la funcion: %d", f1(&K));
    }
}

void f1(int *R)
{
    *R += *R;
}


/* Nota para profesor: Este programa no corre como esta escrito en el libro,
cuando convierto la funcion f1 a int en vez de void como dice el libro el programa corre
pero no da el mismo resultado que muestra el libro.*/
