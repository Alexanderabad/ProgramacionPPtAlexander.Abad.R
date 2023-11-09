#include <stdio.h>

int main()
{

    char cadena[100];
    int mayusculas = 0;
    int minusculas = 0;

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
            mayusculas++;
        } else if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            minusculas++;
        }
    }

    printf("Cantidad de letras mayúsculas: %d\n", mayusculas);
    printf("Cantidad de letras minúsculas: %d\n", minusculas);

    return 0;
}
