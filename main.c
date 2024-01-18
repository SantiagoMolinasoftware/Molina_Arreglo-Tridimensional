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


}