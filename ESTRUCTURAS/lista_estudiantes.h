#ifndef LISTA_ESTUDIANTES_H
#define LISTA_ESTUDIANTES_H

#include "constitucion.h"

typedef struct Nodo {
    Estudiante estudiante;
    struct Nodo *siguiente;
} Nodo;

Nodo *crearNodo(Estudiante estudiante);
void agregarEstudiante(Nodo **lista, Estudiante estudiante);
void imprimirLista(Nodo *lista);
void liberarLista(Nodo **lista);

#endif // LISTA_ESTUDIANTES_H
