// por_direccion.c
#include <stdio.h>
#include "por_direccion.h"

void imprimirEstudianteDireccion(Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}
