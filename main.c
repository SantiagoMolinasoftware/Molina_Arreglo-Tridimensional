#include <stdio.h>

int main() 
{
    int filas, columnas, profundidad;

    // Solicitar al usuario el tamanio de los valores
    printf("Ingrese la cantidad de dimension: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    printf("Ingrese el numero de filas: ");
    scanf("%d", &profundidad);

    // Verificar que los valores ingresados sean correctos
    if (filas <= 0 || columnas <= 0 || profundidad <= 0) {
        printf("Los valores deben ser mayores que cero.\n");
        return 1;
    }

    // Declarar e inicializar el arreglo tridimensional
    int arreglo[filas][columnas][profundidad];

    // Inicializar todas las matrices del arreglo en ceros
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            for (int k = 0; k < profundidad; k++) {
                arreglo[i][j][k] = 0;
            }
        }
    }

    // Inicializar la última matriz en unos
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            for (int k = 0; k < profundidad; k++) {
                if (i == filas - 1) {
                    arreglo[i][j][k] = 1;
                }
            }
        }
    }
    
    // Imprimir el arreglo tridimensional
    printf("\nArreglo tridimensional (%dx%dx%d):\n", filas, columnas, profundidad);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            for (int k = 0; k < profundidad; k++) {
                printf("%d ", arreglo[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}