#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

// Definición de excepciones personalizadas
class FechaInvalidaException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Fecha no válida.";
    }
};

class MateriaNoRegistradaException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Materia no registrada.";
    }
};

// Definición de la estructura Materia
struct Materia {
    string nombre;
    float calificacion;
};

// Definición de la estructura Estudiante
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
    vector<Materia> materias; // Vector de materias en las que está inscrito el estudiante
};

// Declaración de funciones para la gestión de materias
void agregarMateria(Estudiante& estudiante, const string& nombreMateria, float calificacion);
void eliminarMateria(Estudiante& estudiante, const string& nombreMateria);
void mostrarMaterias(const Estudiante& estudiante);

// Declaración de la función mostrarEstudiante
void mostrarEstudiante(const Estudiante& estudiante);

int main() {
    try {
        // Ejemplo de uso
        Estudiante estudiante1 = {"Juan", 20, 8.5};

        // Agregar materias
        agregarMateria(estudiante1, "Matemáticas", 9.0);
        agregarMateria(estudiante1, "Historia", 7.5);

        // Mostrar información del estudiante y sus materias
        mostrarEstudiante(estudiante1);
        mostrarMaterias(estudiante1);

        // Intentar agregar una materia con una fecha no válida (simulado)
        throw FechaInvalidaException();

        // Eliminar una materia
        eliminarMateria(estudiante1, "Historia");

        // Mostrar información actualizada
        mostrarEstudiante(estudiante1);
        mostrarMaterias(estudiante1);
    } catch (const exception& e) {
        cerr << "Excepción atrapada: " << e.what() << endl;
    }

    return 0;
}

// Implementación de funciones para la gestión de materias
void agregarMateria(Estudiante& estudiante, const string& nombreMateria, float calificacion) {
    // Simulación de una excepción si la materia no está registrada
    if (nombreMateria == "Biología") {
        throw MateriaNoRegistradaException();
    }

    Materia materia = {nombreMateria, calificacion};
    estudiante.materias.push_back(materia);
}

void eliminarMateria(Estudiante& estudiante, const string& nombreMateria) {
    for (auto it = estudiante.materias.begin(); it != estudiante.materias.end(); ++it) {
        if (it->nombre == nombreMateria) {
            estudiante.materias.erase(it);
            break;
        }
    }
}

void mostrarMaterias(const Estudiante& estudiante) {
    cout << "Materias inscritas:" << endl;
    for (const auto& materia : estudiante.materias) {
        cout << "- " << materia.nombre << ": " << materia.calificacion << endl;
    }
}

// Implementación de la función mostrarEstudiante
void mostrarEstudiante(const Estudiante& estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}
