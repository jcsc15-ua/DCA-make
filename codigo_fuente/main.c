#include <stdio.h>
#include "prime_utils.h"
#include "math_utils.h"

int main() {
    int limite;

    printf("Ingrese un número límite para encontrar números primos: ");
    scanf("%d", &limite);

    printf("Números primos hasta %d:\n", limite);
    int* primos = obtener_numeros_primos(limite);
    
    // Imprimir números primos
    for (int i = 0; primos[i] != -1; i++) {
        printf("%d ", primos[i]);
    }
    printf("\n");

    // Calcular y mostrar la suma y el promedio
    int suma = calcular_suma(primos);
    double promedio = calcular_promedio(primos);
    
    printf("Suma de números primos: %d\n", suma);
    printf("Promedio de números primos: %.2f\n", promedio);

    // Liberar memoria
    free(primos);
    return 0;
}
