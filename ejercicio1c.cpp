#include "studioh"
#include <cstdio>

//Definir estructura estudiante
struct Estudiante{
    char nombre;
    int edad;
    float promedio;
};

//Declaracion funcion estudiante en c
void mostrarEstudiante(Estudiante estudiante);

int main(){
    //Definir variable de tipo estudiante
    Estudiante estudiante;

    //Pedir datos al usuario
    printf("Nombre: ");
    scanf("%s", &estudiante.nombre);
    printf("Edad: ");
    scanf("%d", &estudiante.edad);
    printf("Promedio: ");
    scanf("%f", &estudiante.promedio);

    //Mostrar los datos del estudiante
    mostrarEstudiante(estudiante);

    return 0;
}