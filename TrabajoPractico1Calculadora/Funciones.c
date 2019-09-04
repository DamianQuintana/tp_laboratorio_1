#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

double getNumber()
{
    double number;
    printf("\nIngrese un numero\n");

    while(scanf("%lf", &number)==0) //Validacion que sea un numero, en caso que no se guarde en memoria devuelve un '0' indicando que fallo
    {
        system("PAUSE");
        system("CLS");
        printf("Valor incorrecto, vuelva a ingresar el valor\n\n");
        scanf("%lf", &number);
        fflush(stdin);
    }
    system("CLS");
    return number;
}


double subtraction(double number1, double number2) //Funcion "substraction"
{
    double subtract; //Declaramos la variable restar donde vamos a guardar el valor resultante de la operaci�n aritm�tica
    subtract = number1 - number2; //Realizamos la operaci�n aritm�tica
    return subtract;//Devolvemos el valor de la operaci�n para verificar que el resultado sea correcto
}

double sum(double number1, double number2)
{
    float add; //Declaramos la variable restar donde vamos a guardar el valor resultante de la operaci�n aritm�tica
    add = number1 + number2; //Realizamos la operaci�n aritm�tica
    return add;//Devolvemos el valor de la operaci�n para verificar que el resultado sea correcto

}

double multiplication(double number1, double number2) //Funcion "multiplication"
{
    double multiply;//Declaramos la variable restar donde vamos a guardar el valor resultante de la operaci�n aritm�tica
    multiply = number1*number2;//Realizamos la operaci�n aritm�tica
    return multiply;//Devolvemos el valor de la operaci�n para verificar que el resultado sea correcto
}

double division(double number1, double number2)//Funcion "Division"
{
    double divide; //Declaramos la variable "divide" donde guardamos el valor de la operaci�n aritm�tica
    divide = number1 / number2; //Realizamos la operaci�n aritm�tica
    return divide;//Devolvemos el valor de la operaci�n para verificar que el resultado sea correcto
}

double factorial(double number1, double number2) //Funcion "Factorial"
{
    double factorize=1; //Declaramos la variable factorizar y la inicializamos en 1 para evitar que tome un valor "basura"
    double factorize2=1;

    if(number1==0 ) //En caso de que el numero ingresado sea 0 devolvemos un 1
    {
        factorize=1;
    }
    else
    {
        for(int i = 1; i<= number1; i++) //Usamos la operacion for para buscar el valor de la factorizaci�n siendo i menor a el valor a factorizar
        {
            factorize = factorize * i; //Realizamos la operaci�n aritm�tica
        }
    }

    if(number2==0) //En caso de que el numero ingresado sea 0 devolvemos un 1
    {
        factorize2=1;
    }
    else
    {
        for(int i = 1; i<= number2; i++) //Usamos la operacion for para buscar el valor de la factorizaci�n siendo i menor a el valor a factorizar
        {
            factorize2 = factorize2 * i; //Realizamos la operaci�n aritm�tica
        }
    }

    return factorize; //devolvemos el valor de la funcion factorizar para verificar que el resultado sea correcto
    return factorize2; //devolvemos el valor de la funcion factorizar para verificar que el resultado sea correcto
}
