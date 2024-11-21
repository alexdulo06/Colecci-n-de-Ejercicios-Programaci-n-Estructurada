#include <stdio.h>
#include <string.h>
#include "constitucion.h"

void instanciarEstructura() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante1.nombre, estudiante1.edad, estudiante1.promedio);
}
