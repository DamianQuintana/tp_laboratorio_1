#include <stdio.h>
#include <stdlib.h>
#include"Funciones.h"
int main()
{
    //DECLARACION DE VARIABLES

    int menu;
    double factorize;
    double factorize2;
    double number1=0;
    double number2=0;
    double subtract;
    double add;
    double multiply;
    double divide;


    while(menu!=5) //Condicion de salida del programa a traves del "switch" del men�
    {
        //INTERFAZ DEL MENU A TRAVES DE PRINTF
            printf("|====================================|\n");
            printf("|BIENVENIDO AL MENU DE LA CALCULADORA|\n");
            printf("|====================================|\n\n");
            printf("1. Solicitar valor de A:%.2lf\n", number1);
            printf("2. Solicitar valor de B:%.2lf\n", number2);
            printf("3. Calcular todas las operaciones\n");
            printf("4. Mostrar todos los resultados\n");
            printf("5. Salir\n");
            scanf("%d", &menu); // Toma por teclado de la opcion
            fflush(stdin);
            system("PAUSE");
            system("CLS");

        switch(menu)
        {
            case 1: //Solcito valor de A
                    number1 = getNumber();
            break;

            case 2: //Solicito valor de B
                    number2 = getNumber();
            break;

            case 3: //Realizo todas las operaciones aritm�ticas asignandole a una variable del main los resultados retornados por las funciones
                    system("CLS");
                    printf("|================================|\n");
                    printf(" CALCULANDO TODAS LAS OPERACIONES\n");
                    printf("|================================|\n\n");
                    system("PAUSE");
                    system("CLS");
                    subtract = subtraction(number1, number2);
                    add = sum(number1, number2);
                    multiply = multiplication(number1, number2);
                    divide = division(number1, number2);
                    factorize = factorial(number1, number2);
                    factorize2 = factorial(number2, number1);
            break;

            case 4: //Muestro todas las operaciones aritm�ticas
                    printf("El resultado de %.2f+%.2lf es: %.2lf\n",number1, number2, add);
                    printf("El resultado de %.2lf-%.2lf es: %.2lf\n",number1, number2, subtract);

                    if(number2==0) //En caso de la division si el segundo numero es 0 mostramos error
                    {
                        printf("NO SE PUEDE DIVIDIR POR 0\n");
                    }
                    else
                    {
                        printf("El resultado de %.2lf/%.2lf es: %.2lf\n",number1, number2, divide);
                     }

                    printf("El resultado de %.2lf*%.2lf es: %.2lf\n",number1, number2, multiply);
                    printf("El factorial de %.2lf es: %.2lf \nEl factorial de %.2lf es: %.2lf\n", number1, factorize, number2, factorize2);
                    system("PAUSE");
                    system("CLS");
            break;

            case 5: // Salgo del programa
                    printf("|===========|\n");
                    printf(" HASTA LUEGO\n");
                    printf("|===========|\n");
                    system("PAUSE");
            break;

            default :// Default en caso que no se seleccione una de las opciones del men�
                    printf("INGRESE UNA OPCION VALIDA!!!\n\n");
                    system("PAUSE");
                    system("CLS");

            break;
        }
    }
}
