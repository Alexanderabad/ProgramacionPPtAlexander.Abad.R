#include <stdio.h>

/*El programa debe de cambiar el orden de los datos que se le agreguen
EJ. al agregar como datos A, B, C, D, debe de imprimir  D, C, B, A. esto debe de hacerlo
sumando y restando desde el codigo asciis */

/* A-Z variable de tipo caracter */

int main()

char letras[26]; /* arreglo para armacenar las letras*/

for (char letra = 'a'; letras <= 'z'; letra++)
{
    letras[letra - 'a'] = letra;

    for (int i = 0; i < 26; i++)
    {
        printf("%c ", letras[i]);

    }
    return 0;
}
