#include "iostream"
#include "string"

using namespace std;

//Definir estructura estudiante
struct Estudiante{
    string nombre;
    int edad;
    float promedio;
};
//Funcion mostrar estudiante
void mostrarEstudiante(Estudiante estudiante){
    cout<<"Nombre: "<<estudiante.nombre<<endl;
    cout<<"Edad: "<<estudiante.edad<<endl;
    cout<<"Promedio: "<<estudiante.promedio<<endl;
}