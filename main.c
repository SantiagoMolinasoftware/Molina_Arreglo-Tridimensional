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
