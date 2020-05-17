#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define TAM 5
#define TAMSEC 4





int main()
{
    int proximoId = 1000;
    eSectores sectores[] = {{1, "sistemas"},{2, "ventas"},{3, "legales"},{4, "contables"}};
    eEmployee empleados[TAM];
    char continuar = 's';
    char confirma;

    inicializarEmpleados(empleados, TAM);

    do
    {
        system("cls");
        switch(menuAmable())
        {

        case 1:
            if(altaEmpleado(proximoId, empleados, TAM, sectores, TAMSEC))
            {
                proximoId++;
            }

            break;
        case 2:
            bajaEmpleado(empleados, TAM, sectores, TAMSEC);
            break;
        case 3:
            modificarEmpleado(empleados, TAM, sectores, TAMSEC);
            break;
        case 4:
            informarEmpleados(empleados, sectores, TAM, TAMSEC);
            break;
        case 5:
            printf("confirma salida? \n");
            fflush(stdin);
            scanf("%c", &confirma);
            if(confirma == 's')
            {
                continuar = 'n';
            }
            break;



        }
        system("pause");

    }
    while(continuar == 's');
    return 0;
}

