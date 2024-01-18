#include <stdio.h>

// Definimos la estructura Alumno
struct Alumno {
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};

// Prototipos de funciones
void ingresarDatos(struct Alumno *alumnos, int n);
void mostrarDatos(struct Alumno *alumnos, int n);

int main() {

    int n;
    printf("Ingrese el numero de alumnos: ");
    scanf("%d", &n);

    // Crear un arreglo de estructuras Alumno
    struct Alumno alumnos[n];

    int opcion;
    do {
        // Mostrar menu
        printf("\nMENU:\n");
        printf("1. Ingresar datos de alumnos.\n");
        printf("2. Mostrar datos de alumnos.\n");
        printf("0. Salir.\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                // Llamar a la funcion para ingresar datos
                ingresarDatos(alumnos, n);
                break;

            case 2:
                // Llamar a la funcion para mostrar datos
                mostrarDatos(alumnos, n);
                break;

            case 0:
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 0);

    return 0;
}