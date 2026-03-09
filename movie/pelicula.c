#include "pelicula.h"
#include <stdlib.h>
#include <string.h>

static char* copiarCadena(const char* s) {
    if (!s) return NULL;
    char* copia = malloc(strlen(s) + 1);
    if (copia) strcpy(copia, s);
    return copia;
}

Pelicula* crearPelicula(const char *nombre, const char *genero, short year) {
    Pelicula p = (Pelicula) malloc(sizeof(Pelicula));
    if (!p) return NULL;
    
    p->nombre = copiarCadena(nombre);
    p->genero = copiarCadena(genero);
    p->year = year;
    p->numDirectores = 0;
    
    return p;
}

void imprimirPelicula(const Pelicula *p) {
    if (!p) return;
    printf("PELICULA: %s\n", p->nombre);
    printf("GENERO: %s\n", p->genero);
    printf("ANIO: %d\n", p->year);
    printf("DIRECTOR(ES):\n");
    for(int i = 0; i < p->numDirectores; i++) {
        printf("- %s\n", p->directores[i]);
    }
}

void cambiarGenero(Pelicula *p, const char *nuevoGenero) {
    if (!p) return;
    free(p->genero); 
    p->genero = copiarCadena(nuevoGenero);
}

void agregarDirector(Pelicula *p, const char *nombreDirector) {
    if (!p || p->numDirectores >= 10) return; 
    p->directores[p->numDirectores] = copiarCadena(nombreDirector);
    p->numDirectores++;
}

void destruirPelicula(Pelicula *p) {
    if (!p) return;
    free(p->nombre);
    free(p->genero);
    for(int i = 0; i < p->numDirectores; i++) {
        free(p->directores[i]);
    }
    free(p);
}
