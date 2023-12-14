#include "studioh"
#include <cstdio>
<<<<<<< HEAD
#include <vector>
=======

>>>>>>> 7afedf884ea5b3c713858aed3dd1b74928ddf390
//Definir estructura estudiante
struct Estudiante{
    char nombre;
    int edad;
    float promedio;
};

//Declaracion funcion estudiante en c
void mostrarEstudiante(Estudiante estudiante);

<<<<<<< HEAD


=======
>>>>>>> 7afedf884ea5b3c713858aed3dd1b74928ddf390
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