#include <stdio.h>

/* Eleccion.
El programa obtiene el total de votos de cada candidato y el porcentaje
correspondiente. Tambi�n considera votos nulos.
VOT, C1, C2, C3, C4, C5, NU, SVO: variables de tipo entero.
PO1, PO2, PO3, PO4, PO5, PON: variables de tipo real.*/

void main(void) //Sirve como punto de entrada del programa
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;
    //Define variables numericas con numeros de tipo entero
    float PO1, PO2, PO3, PO4, PO5, PON;
    //Tipo de datos flotantes, define valores numericos con puntos decimales
    printf("Ingrese el primer voto: "); //Presenta en la pantalla algun dato
    scanf("%d", &VOT); //Lee caracteres ingresados desde el teclado
    while (VOT) /* Ejecuta un bloque de instrucciones en un bucle siempre
    que esta condici�n sea verdadera */
    {
        switch(VOT) /*Permite selccionar el bloque de instucciones que se va a
        ejecutar dentro de varias opciones */
        {
            case 1: C1++; /* Dependiendo del valor de la variable,
        ejecuta un bloque de instrucciones */
                break; //Finaliza la ejecucion del bucle
            case 2: C2++; break;
            case 3: C3++; break;
            case 4: C4++; break;
            case 5: C5++; break;
            default: NU++; break;
        }
        printf("Ingrese el siguiente voto -0 para terminar-: ");
        scanf("%d", &VOT);
    }
    SVO = C1 + C2 + C3 + C4 + C5 + NU;
    PO1 = ((float) C1 / SVO) * 100;
    PO2 = ((float) C2 / SVO) * 100;
    PO3 = ((float) C3 / SVO) * 100;
    PO4 = ((float) C4 / SVO) * 100;
    PO5 = ((float) C5 / SVO) * 100;
    PON = ((float) NU / SVO) * 100;
    printf("\nTotal de votos: %d", SVO);
    printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1);
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4);
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5);
    printf("\nNulos: %d votos -- Porcentaje: %5.2f", NU, PON);
} //Fin del programa