#include <stdio.h>

/* Busqueda secuencial en arreglos ordenados en forma creciente. */

const int MAX=100;

void Lectura(int, int);     /* Prototipos de funciones. */
int Busca(int *, int, int);

void main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamano del arreglo: ");
        scanf("%d", &TAM);
    }


while (TAM > MAX || TAM < 1);
/* Se verifica que el tamano del arreglo sea correcto. */
Lectura(VEC, TAM);
printf("\nIngrese el elemento a buscar:");
scanf("%d", &ELE);
RES = Busca(VEC, TAM, ELE);     /* se llama a la funcion que busca en el arreglo. */

if (RES)
/* si RES tiene un valor verdadero -diferente de 0-, se escribe la posicion en el
que se encintro al elemento. */
 printf("\nEl elemento se encuentra en la posicion: %d", RES);
else
printf("El elemento no se encuentra en el arreglo");
}
void Lectura(int A, int T)
/* La función Lectura se utiliza para leer un arreglo unidimensional de T
elementos de tipo entero. */
{
int I;
for (I=0; I<T; I++)
{
printf("Ingrese el elemento %d: ", I+1);
scanf("%d", &A, I);
}
}

