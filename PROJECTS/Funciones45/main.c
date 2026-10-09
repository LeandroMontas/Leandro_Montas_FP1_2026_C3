#include <stdio.h>
#include <stdlib.h>
//dividir el problema
//Variables Ambito
//Variables Globales y Locales
//Ciclo de vida de una variable
//Variables pasadas por valor y por referencia
// * operador de indireccion
// & operador de direccion

#define SALIR 0
#define SUMAR 1
#define DIVIDIR 2
#define MULTIPLICAR 3
#define RESTAR 4

#define ERR_OK 0
#define ERR_INESPERADO 89
#define ERR_DivByZero 230

//declaraciones de funciones
int leer_numeros(int op, double *pn, double *sn);
int sumar(double num1, double num2, double *result);
int dividir(double numerador, double denominador, double *result);
int multiplicar(double factor1, double factor2, double *result);
int restar(double minuendo, double sustraendo, double *result);



int main()
{
    //variables locales
    int menu = -1;
    int err = ERR_OK;
    double r = 0.0;
    double n1 = 0.0;
    double n2 = 0.0;


    printf("CALCULADORA\n");
    do
    {
        printf("\n\n\n0-SALIR\n1-SUMAR\n2-DIVIDIR\n3-MULTIPLICAR\n4-RESTAR\n");
        scanf("%i",&menu);

        if(menu == SUMAR)
        {
            err = leer_numeros(menu, &n1, &n2);
            err = sumar(n1,n2,&r);
            if(err == ERR_OK)
            {
               printf("\nLa suma de %lf mas %lf es:%lf",n1,n2,r);
            }else{
                printf("\nHa ocurrido un error!");
            }
        }

        if(menu == DIVIDIR)
        {
            err = leer_numeros(menu, &n1, &n2);
            err = dividir(n1,n2,&r);
            if(err == ERR_OK)
            {
               printf("\nLa division entre %lf y %lf es:%lf",n1,n2,r);
            }else{
                if(err == ERR_DivByZero)
                {
                     printf("\nError division por cero!");
                }else{
                    printf("\nHa ocurrido un error!");
                }

            }
        }
        if(menu == MULTIPLICAR)
        {
            err = leer_numeros(menu, &n1, &n2);
            err = multiplicar(n1,n2,&r);
            if(err == ERR_OK)
            {
               printf("\nLa multiplicacion de %lf por %lf es:%lf",n1,n2,r);
            }else{
                printf("\nHa ocurrido un error!");
            }
        }
        if(menu == RESTAR)
        {
            err = leer_numeros(menu, &n1, &n2);
            err = restar(n1,n2,&r);
            if(err == ERR_OK)
            {
               printf("\nLa resta de %lf menos %lf es:%lf",n1,n2,r);
            }else{
                printf("\nHa ocurrido un error!");
            }
        }
    }
    while(menu != SALIR);

    return 0;
}

int leer_numeros(int op, double *pn, double *sn)
{
    if (op == SUMAR)
    {
        printf("\nIngresa el primer sumando: ");
        scanf("%lf",pn);
        printf("\nIngresa el segundo sumando: ");
        scanf("%lf",sn);

    }else if(op == RESTAR)
    {
        printf("\nIngresa el minuendo: ");
        scanf("%lf",pn);
        printf("\nIngresa el sustraendo: ");
        scanf("%lf",sn);

    }else if(op == MULTIPLICAR)
    {
        printf("\nIngresa el primer factor: ");
        scanf("%lf",pn);
        printf("\nIngresa el segundo factor: ");
        scanf("%lf",sn);

    }else if(op == DIVIDIR)
    {
        printf("\nIngresa el numerador: ");
        scanf("%lf",pn);
        printf("\nIngresa el denominador: ");
        scanf("%lf",sn);

    } else
    {
        printf("\n\nError: Operacion invalida.");
    }
}

int sumar(double num1, double num2, double *result)
{
    *result = num1 + num2;
    return ERR_OK;
}

int dividir(double numerador, double denominador, double *result)
{
    if(denominador == 0.0)
    {
        return ERR_DivByZero;
    }else
    {
        *result = numerador / denominador;
        return ERR_OK;
    }
}
int multiplicar(double factor1, double factor2, double *result)
{
    *result = factor1 * factor2;
    return ERR_OK;
}

int restar(double minuendo, double sustraendo, double *result)
{
    *result = minuendo - sustraendo;
    return ERR_OK;
}
