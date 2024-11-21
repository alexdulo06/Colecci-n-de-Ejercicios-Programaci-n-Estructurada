#include "malloc.h"

void usarMalloc() {
    // Crear un puntero de tipo Estudiante usando malloc
    Estudiante *estudiante = (Estudiante *) malloc(sizeof(Estudiante));
    if (estudiante == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }

    // Asignar valores a los miembros de la estructura
    strcpy(estudiante->nombre, "Carlos");
    estudiante->edad = 21;
    estudiante->promedio = 8.7;

    // Imprimir los valores para comprobar
    printf("Estudiante (con malloc): Nombre: %s, Edad: %d, Promedio: %.2f\n",
           estudiante->nombre, estudiante->edad, estudiante->promedio);

    // Liberar la memoria después de usarla
    free(estudiante);
}
