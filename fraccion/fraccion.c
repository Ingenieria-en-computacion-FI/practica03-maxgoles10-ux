#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"

struct Fraccion
{
   int num;
   int den;
};

int mcd(int a, int b)
{
   if(b == 0)
      return a;
   return mcd(b, a % b);
}

Fraccion* crearFraccion(int num, int den)
{
    if(den == 0)
   {
       printf("El denominador no puede ser 0\n");
       return NULL;
   {   
   Fraccion* f = (Fraccion*)malloc(sizeof(Fraccion));
   f->num = num;
   f->den = den;

   simplificar(f);
   return f;
       
}

void simplificar(Fraccion* f)
{
   int divisor = mcd(f->num, f->den);
   f->num = f->num / divisor;
   f->den = f->den / divisor;
}

Fraccion* sumar(Fraccion* a, Fraccion* b)
{
   int num = (a->num * b->den) + (b->num * a->den);
   int den = a->den * b->den;
   Fraccion* resultado = crearFraccion(num, den);
   simplificar(resultado);
    return resultado;
}

void imprimir(Fraccion* f)
{
    printf("%d/%d\n", f->num, f->den);
}

void destruir(Fraccion* f)
{
    free(f);
}
