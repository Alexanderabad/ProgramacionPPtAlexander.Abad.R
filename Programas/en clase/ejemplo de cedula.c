#include <stdio.h>
#include <string.h>

struct cedula {
    char numero[15];
    char nombre[30];
    int edad;
    char direccion[50];
};

int main() {
    struct cedula cedula1, cedula2, cedula3;
    char nom[30], dir[50];
    int edad;

    printf("Ingrese el n�mero de c�dula 1: ");
    gets(cedula1.numero);
    printf("Ingrese el nombre del titular: ");
    gets(cedula1.nombre);
    printf("Ingrese la edad del titular: ");
    scanf("%d", &cedula1.edad);
    fflush(stdin);
    printf("Ingrese la direcci�n del titular: ");
    gets(cedula1.direccion);

    printf("Ingrese el n�mero de c�dula 2: ");
    gets(cedula2.numero);
    printf("Ingrese el nombre del titular: ");
    gets(cedula2.nombre);
    printf("Ingrese la edad del titular: ");
    scanf("%d", &cedula2.edad);
    fflush(stdin);
    printf("Ingrese la direcci�n del titular: ");
    gets(cedula2.direccion);

    printf("Ingrese el n�mero de c�dula 3: ");
    gets(cedula3.numero);
    printf("Ingrese el nombre del titular: ");
    gets(cedula3.nombre);
    printf("Ingrese la edad del titular: ");
    scanf("%d", &cedula3.edad);
    fflush(stdin);
    printf("Ingrese la direcci�n del titular: ");
    gets(cedula3.direccion);

    printf("\nDatos de la c�dula 1\n");
    printf("N�mero de c�dula: %s\n", cedula1.numero);
    printf("Nombre del titular: %s\n", cedula1.nombre);
    printf("Edad del titular: %d\n", cedula1.edad);
    printf("Direcci�n del titular: %s\n", cedula1.direccion);

    printf("\nDatos de la c�dula 2\n");
    printf("N�mero de c�dula: %s\n", cedula2.numero);
    printf("Nombre del titular: %s\n", cedula2.nombre);
    printf("Edad del titular: %d\n", cedula2.edad);
    printf("Direcci�n del titular: %s\n", cedula2.direccion);

    printf("\nDatos de la c�dula 3\n");
    printf("N�mero de c�dula: %s\n", cedula3.numero);
    printf("Nombre del titular: %s\n", cedula3.nombre);
    printf("Edad del titular: %d\n", cedula3.edad);
    printf("Direcci�n del titular: %s\n", cedula3.direccion);

    return 0;
}
