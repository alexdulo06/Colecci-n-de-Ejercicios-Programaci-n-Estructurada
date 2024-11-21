#include <stdio.h>
#include <string.h>
#include "alias.h"

void probarAlias() {
    Estudiante estudiante1 = {"Pedro", 25, 9.7};
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante1.nombre, estudiante1.edad, estudiante1.promedio);
}
