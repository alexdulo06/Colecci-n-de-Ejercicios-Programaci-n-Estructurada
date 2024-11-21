#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Encabezados de las carpetas del proyecto
#include "Estructuras/constitucion.h"
#include "Estructuras/instanciacion.h"
#include "Estructuras/malloc.h"
#include "Estructuras/punteros.h"
#include "Estructuras/lista_estudiantes.h"
#include "Uniones/uniones.h"
#include "Copia/copia.h"
#include "Alias/alias.h"
#include "Funciones/por_valor.h"
#include "Funciones/por_referencia.h"
#include "Funciones/por_direccion.h"

int main() {
    // **1. Estructuras: Instanciación**
    printf("=== Instanciación de Estructuras ===\n");
    instanciarEstructura();

    // **2. Estructuras: Uso de malloc**
    printf("\n=== Uso de malloc con Estructuras ===\n");
    usarMalloc();

    // **3. Estructuras: Punteros a Estructuras**
    printf("\n=== Punteros a Estructuras ===\n");
    usarPunteros();

    // **4. Estructuras: Lista de Estudiantes**
    printf("\n=== Lista de Estudiantes ===\n");
    Nodo *listaEstudiantes = NULL;

    Estudiante estudiante1 = {"Juan", 20, 8.5};
    Estudiante estudiante2 = {"Ana", 22, 9.0};
    Estudiante estudiante3 = {"Pedro", 25, 7.8};

    agregarEstudiante(&listaEstudiantes, estudiante1);
    agregarEstudiante(&listaEstudiantes, estudiante2);
    agregarEstudiante(&listaEstudiantes, estudiante3);

    imprimirLista(listaEstudiantes);
    liberarLista(&listaEstudiantes);

    // **5. Uniones**
    printf("\n=== Uso de Uniones ===\n");
    probarUniones();

    // **6. Copia de Estructuras**
    printf("\n=== Copia de Estructuras ===\n");
    Estudiante estudianteOriginal = {"Maria", 23, 9.3};
    Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);
    printf("Estudiante Original: Nombre: %s, Edad: %d, Promedio: %.2f\n",
           estudianteOriginal.nombre, estudianteOriginal.edad, estudianteOriginal.promedio);
    printf("Estudiante Copia: Nombre: %s, Edad: %d, Promedio: %.2f\n",
           estudianteCopia.nombre, estudianteCopia.edad, estudianteCopia.promedio);

    // **7. Alias**
    printf("\n=== Alias con typedef ===\n");
    probarAlias();

    // **8. Funciones: Pasar estructuras por valor**
    printf("\n=== Pasar Estructuras por Valor ===\n");
    imprimirEstudiante(estudianteOriginal);

    // **9. Funciones: Pasar estructuras por referencia**
    printf("\n=== Pasar Estructuras por Referencia ===\n");
    printf("Antes de modificar: Edad = %d\n", estudianteOriginal.edad);
    modificarEstudiante(&estudianteOriginal);
    printf("Después de modificar: Edad = %d\n", estudianteOriginal.edad);

    // **10. Funciones: Pasar estructuras por dirección**
    printf("\n=== Pasar Estructuras por Dirección ===\n");
    imprimirEstudianteDireccion(&estudianteOriginal);

    return 0;
}
    