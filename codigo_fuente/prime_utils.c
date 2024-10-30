#include <stdio.h>
#include <stdlib.h>
#include "prime_utils.h"

// Función para comprobar si un número es primo
int es_primo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Función para obtener los números primos hasta un límite
int* obtener_numeros_primos(int limite) {
    int* primos = malloc((limite + 1) * sizeof(int));
    int j = 0;

    for (int i = 2; i <= limite; i++) {
        if (es_primo(i)) {
            primos[j++] = i;
        }
    }
    primos[j] = -1;  // Marcador de fin
    return primos;
}
