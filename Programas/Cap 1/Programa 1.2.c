#include <stdio.h>

int main() {
    char letra;

    printf("Declaraci�n del alfabeto de la A a la Z:\n");

    for (letra = 'A'; letra <= 'Z'; letra++) {
        printf("%c ", letra);
    }

    printf("\n");

    return 0;
}
