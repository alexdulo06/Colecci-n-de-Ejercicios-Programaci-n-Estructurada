#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista_estudiantes.h"

Nodo *crearNodo(Estudiante estudiante) {
    Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
    nuevo->estudiante = estudiante;
    nuevo->siguiente = NULL;
    return nuevo;
}

void agregarEstudiante(Nodo **lista, Estudiante estudiante) {
    Nodo *nuevo = crearNodo(estudiante);
    nuevo->siguiente = *lista;
    *lista = nuevo;
}

void imprimirLista(Nodo *lista) {
    while (lista != NULL) {
        printf("Nombre: %s, Edad: %d, Promedio: %.2f\n",
               lista->estudiante.nombre, lista->estudiante.edad, lista->estudiante.promedio);
        lista = lista->siguiente;
    }
}

void liberarLista(Nodo **lista) {
    Nodo *actual = *lista;
    while (actual != NULL) {
        Nodo *temp = actual;
        actual = actual->siguiente;
        free(temp);
    }
    *lista = NULL;
}
