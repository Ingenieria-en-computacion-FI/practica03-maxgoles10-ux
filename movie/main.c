#include "pelicula.h"

int main() {
    Pelicula *matrix = crearPelicula("The Matrix", "Ciencia ficcion", 1999);
    agregarDirector(matrix, "Lana Wachowski");
    agregarDirector(matrix, "Lilly Wachowski");
    imprimirPelicula(matrix);
    destruirPelicula(matrix);
    
    return 0;
}
