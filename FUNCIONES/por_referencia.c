// por_referencia.c
#include <stdio.h>
#include "por_referencia.h"

void modificarEstudiante(Estudiante *est) {
    est->edad = 30;
}
