#include "punteros.h"

void usarPunteros() {
    // Crear una estructura Estudiante
    Estudiante estudiante = {"Laura", 23, 9.1};

    // Crear un puntero a la estructura Estudiante
    Estudiante *punteroEst = &estudiante;

    // Acceder a los miembros de la estructura a través del puntero
    printf("Estudiante (usando puntero): Nombre: %s, Edad: %d, Promedio: %.2f\n",
           punteroEst->nombre, punteroEst->edad, punteroEst->promedio);
}
