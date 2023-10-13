#include <stdio.h>

/* Busqueda secuencial en arreglos desordenados. */

const int MAX=100;

void Lectura (int, int);            /* prototipo de funcion */
int Busca (int *, int, int);

void main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamano del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM>MAX || TAM<1);   /* Se verifica que el tamano del arreglo sea correcto. */
   Lectura(VEC, TAM);
   printf("\nIngrese el elemento a buscar: ");
   scanf("%d", &ELE);
   RES = Busca(VEC, TAM, ELE);  /* se llama a la que busca en el arreglo. */
   if (RES)
    /* Si RES tiene un valor verdadero -diferente de 0-, se escribe la posicion en la que
     se encontro el elemento. */
       printf("\nEl elemento se encuentra en la posicion %d", RES);
   else
       printf("\nEl elemento se encuentra en el arreglo");
}
void Lectura(int A[], int T)

/* La funcion Lectura se utiliza para leer un arreglo unidimensional de T elemento de tipo entero. */
{
    int I;
    for (I=0; I<T; I++)
    {
       printf("Ingrese el elemento %d: ", I+1);
       scanf("%d", &A[I]);
    }
}
int Busca(int A[], int T, int K)
/* esta funcion localiza en el arreglo un elemento determinado. si el elemento es encontrado, regresa
 la posicion correspondiente. En caso contrario, regresa 0. */
 {
     int I = 0, BAN = 0, RES;
     while (I < T && !BAN)
        if (A[I] == K)
           BAN++;
     else
        I++;
     if (BAN)
        RES = I + 1;
     /* Se asigna I+1 dado que las posiciones en el arreglo comienza desde cero. */
     else
        RES = BAN;
     return (RES);
 }
