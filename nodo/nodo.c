#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

struct Nodo
{
    int valor;
};

Nodo* crearNodo(int valor)
{
    
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo)); 
    
    if (nuevo != NULL) { 
        nuevo->valor = valor; 
    }

    return nuevo; 
}



int obtenerValor(Nodo* nodo)
{
    
    if (nodo != NULL) { 
        return nodo->valor; 
    }

    return 0; 
}


void asignarValor(Nodo* nodo, int valor)
{
  
    if (nodo != NULL) {
        nodo->valor = valor; 
    }
}



void destruirNodo(Nodo* nodo)
{
    
    if (nodo != NULL) {
        free(nodo); 
    }
}
