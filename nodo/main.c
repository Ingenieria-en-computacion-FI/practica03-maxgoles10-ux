#include <stdio.h>
#include "nodo.h"

int main() 
{
    printf("Prueba del TAD Nodo\n");

    Nodo* n = crearNodo(10);

    if (n != NULL) {
        printf("Valor actual: %d\n", obtenerValor(n));
    }

    asignarValor(n, 25);

    if (n != NULL) {
        printf("Nuevo valor asignado: %d\n", obtenerValor(n));
    }

    destruirNodo(n);
    n = NULL; // Buena práctica para evitar punteros colgantes

    return 0;
}
