#include "iostream"
#include "string"
#include "vector"
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

<<<<<<< Updated upstream
=======
// Definición de la estructura Materia
struct Materia {
    string nombre;
    float calificacion;
};

<<<<<<< Updated upstream

    vector<Materia> materias; // Vector de materias en las que está inscrito el estudiante

>>>>>>> Stashed changes
=======
//Funcion mostrar estudiante
void mostrarEstudiante(Estudiante estudiante)
{
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}

//definicion estrucutura materia

>>>>>>> Stashed changes
int main()
{
    //Definir variable de tipo estudiante
    Estudiante estudiante;
    struct Materia {
        string nombre;
        float calificacion;
    };

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

