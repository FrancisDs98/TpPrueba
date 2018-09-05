#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stdio_ext.h>
#include "math.h"

int main()
{
    float datoUno;
    float datoDos;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    //float FactorialA;
    char opcion;

    do
    {
        printf(".-(1) Ingresar el primer operando\n");
        printf(".-(2) Ingresar el segundo operando\n");
        printf(".-(3) Calcular todas las operanciones\n");
        printf(".-(4) Informar resultados\n");
        printf(".-(5) Salir\n");
        fflush(stdin);
        scanf("%c", &opcion);

        switch(opcion)
        {
            case '1':
                //numeroUno();
                printf("Ingrese el primer numero: ");
                scanf("%f", &datoUno);
                    break;
            case '2':
                //numeroDos()
                printf("Ingrese el segundo numero: ");
                scanf("%f", &datoDos);
                    break;
            case '3':
                resultadoSuma=suma(datoUno, datoDos);
                resultadoResta=resta(datoUno, datoDos);
                resultadoMultiplicacion=multiplicacion(datoUno, datoDos);
                resultadoDivision=division(datoUno, datoDos);
               // FactorialA=factorialAx(datoUno, datoDos);
                printf("Calculando.\n");
                system("pause");
                system("cls");
                    break;
            case '4':
                printf("\n--El resultado de la suma es: %.2f \n",resultadoSuma);
                printf("\n--El resultado de la resta es: %.2f \n",resultadoResta);
                printf("\n--El resultado de la multiplicacion es: %.2f \n",resultadoMultiplicacion);
                printf("\n--El resultado de la division es: %.2f \n",resultadoDivision);
                //printf("\n--El resultado de la factorial A es: %lf \n",factorialAx);
                    break;
            case '5':
                printf("Gracias por utilizar el programa...\n");
                    break;
            default:
                printf("Debe ingresar una opcion valida\n");
                    break;
        }
        system("pause");
        system("cls");


    }while(opcion!='5');

        printf(".-(1) Ingresar el primer operando\n");
        printf(".-(2) Ingresar el segundo operando\n");
        printf(".-(3) Calcular todas las operanciones\n");
        printf(".-(4) Informar resultados\n");
        printf(".-(5) Salir");

    return 0;
}
