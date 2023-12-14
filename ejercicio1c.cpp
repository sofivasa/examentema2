#include "studioh"
#include <cstdio>

//Definir estructura estudiante
struct Estudiante{
    char nombre;
    int edad;
    float promedio;
};
#define EXITO 0
#define MATERIA_NO_REGISTRADA -1


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
    if (resultado == MATERIA_NO_REGISTRADA) {
        printf("Error: Materia no registrada.\n");
        return MATERIA_NO_REGISTRADA;
        resultado = agregarMateria(&estudiante, "Historia", 7.5);
        if (resultado == MATERIA_NO_REGISTRADA) {
            printf("Error: Materia no registrada.\n");
            return MATERIA_NO_REGISTRADA;
        }

        return 0;
}