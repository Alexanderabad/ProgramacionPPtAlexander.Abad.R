#include <stdio.h>

/* Superficie del Triangulo.
El Programa, al recibir como datos la base y la altura de un triangulo,
Calcula su superficie.

BAS, ALT y SUP: variables de tipo real. */

void main (void)
{
    float BAS, ALT, SUP;
    printf("Ingrese la base y la altura del triangulo: ");
    scanf("%f  %f", &BAS, &ALT);
    SUP = BAS * ALT / 2;
    printf("\nLa superfcie del triangulo es: %5.2f", SUP);
}
