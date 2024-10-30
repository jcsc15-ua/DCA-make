#include <stdio.h>
#include <stdlib.h>
#include "math_utils.h"

// Función para calcular la suma de los números primos
int calcular_suma(int* primos) {
    int suma = 0;
    for (int i = 0; primos[i] != -1; i++) {
        suma += primos[i];
    }
    return suma;
}

// Función para calcular el promedio de los números primos
double calcular_promedio(int* primos) {
    int suma = calcular_suma(primos);
    int count = 0;

    for (int i = 0; primos[i] != -1; i++) {
        count++;
    }

    return (count > 0) ? (double)suma / count : 0.0;
}
