#include <stdio.h>

/*asistentes.
El programa, al recibir como datos la matricula, la carrera, el semestre
y el promedio de un alumno de una universidad privada, determina si
este puedee ser asistente de su carrera.

MAT, car y SEM: variables de tipo entero.
PRO: variable de tipo real. */

void main(void)
{
    int MAT, CAR, SEM;
    float PRO;
    printf("Ingrese matricula: ");
    scanf("%d", &MAT);
    printf("Ingrese carrera: (1-Industrial 2-telematica 3-computacion 4-Mecanica) : ");
    scanf("%d", &CAR);
    printf("ingrese semestre: ");
    scanf("%d", &SEM);
    printf("Ingrese promedio: ");
    scanf("%d", &PRO);
    switch(CAR)
    {
     case 1: if (SEM >= 6 && PRO >= 8.5)
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
        break;
     case 2: if (SEM >= 5 && PRO >= 9.0)
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
        break;
     case 3: if (SEM >= 6 && PRO >= 8.8)
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
        break;
     case 4: if (SEM >= 7 && PRO >= 9.0)
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
        break;
    default: printf("\n Error en la carrera");
        break;
    }
}
