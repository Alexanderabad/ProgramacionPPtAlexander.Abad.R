#include <stdio.h>

int main()
{
    char letra;

    printf("Ingresa una letra: ");
    scanf("%c", &letra);

    if (letra >= 'A' && letra <= 'Z')
    {
        printf("La letra ingresada es mayúscula.\n");
    } else if (letra >= 'a' && letra <= 'z')
    {
        printf("La letra ingresada es minúscula.\n");
    } else
    {
        if (letra >= 'a' && letra <= 'z')

        printf("No es una letra.\n");
    }


    return 0;
}
