#ifndef _PELICULA_H_
#define _PELICULA_H_

#include <stdio.h>

struct Pelicula {
    char *nombre;
    char *genero;
    short year;
    short numDirectores;
    char *directores[10]; 
};

typedef struct Pelicula Pelicula;

Pelicula* crearPelicula(const char *nombre, const char *genero, short year);
void imprimirPelicula(const Pelicula *p);
void cambiarGenero(Pelicula *p, const char *nuevoGenero);
void agregarDirector(Pelicula *p, const char *nombreDirector);
void destruirPelicula(Pelicula *p);

#endif
