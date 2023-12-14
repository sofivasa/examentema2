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

int main()
{
    //Definir variable de tipo estudiante
    Estudiante estudiante;

    //Pedir datos al usuario
    cout << "Nombre: ";
    getline(cin, estudiante.nombre);
    cout << "Edad: ";
    cin >> estudiante.edad;
    cout << "Promedio: ";
    cin >> estudiante.promedio;
    
    //Mostrar los datos del estudiante
    mostrarEstudiante(estudiante);

    return 0;
}

