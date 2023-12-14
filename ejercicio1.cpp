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



// Definición de la estructura Materia
struct Materia {
    string nombre;
    float calificacion;
};


    vector<Materia> materias; // Vector de materias en las que está inscrito el estudiante



//Funcion mostrar estudiante
void mostrarestudiante(Estudiante estudiante)
{
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}

//definicion estrucutura materia
struct materia
{
    string nombre;
    float calificacion;
};
// Declaración de funciones para la gestión de materias
void agregarMateria(Estudiante& estudiante, const string& nombreMateria, float calificacion);
void eliminarMateria(Estudiante& estudiante, const string& nombreMateria);
void mostrarMaterias(const Estudiante& estudiante);

// Declaración de la función mostrarEstudiante
void mostrarEstudiante(const Estudiante& estudiante);



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
    mostrarestudiante(estudiante);

    // Agregar materias
    agregarMateria(estudiante, "Matemáticas", 9.0);
    agregarMateria(estudiante, "Historia", 7.5);

    // Mostrar información del estudiante y sus materias
    mostrarestudiante(estudiante);
    mostrarMaterias(estudiante);

    // Eliminar una materia
    eliminarMateria(estudiante, "Historia");

    // Mostrar información actualizada
    mostrarestudiante(estudiante);
    mostrarMaterias(estudiante);


    return 0;
}

