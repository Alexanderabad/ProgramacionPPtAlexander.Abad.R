#include <stdio.h>

int main()
{
    char letra;

    printf("Ingresa una letra: ");
    scanf("%c", &letra);

    if (letra >= 'A' && letra <= 'Z')
    {
        printf("La letra ingresada es may�scula.\n");
    } else if (letra >= 'a' && letra <= 'z')
    {
        printf("La letra ingresada es min�scula.\n");
    } else
    {
        if (letra >= 'a' && letra <= 'z')

        printf("No es una letra.\n");
    }


    return 0;
}
