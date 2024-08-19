/*  Ejercicio 1: Construye una clase llamada Círculo que tenga los siguientes atributos:  
    radio, y los siguientes métodos: perimetro() y area();
*/

// I start programming

#include <iostream>
#include <cmath> // Incluye la constante M_PI
using namespace std;

class Circulo {
private: // Atributos
    float radio;
public: // Métodos
    Circulo(float _radio) {
        radio = _radio;
    }
    void perimetro() {
        cout << "El perímetro es: " << 2 * radio * M_PI << endl;
    }
    void area() {
        cout << "El área es: " << M_PI * pow(radio, 2) << endl;
    }
};

int main() {
    float radio;
    int opcion;

    cout << "Digite el radio: " << endl;
    cin >> radio;

    if (radio < 0) {
        cout << "Error, el radio no puede ser negativo." << endl;
        return 1; // Salir del programa
    }

    // Crear objeto
    Circulo cir1(radio);

    cout << "¿Quieres calcular el área (1) o el perímetro (2)?\n";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cir1.area();
            break;
        case 2:
            cir1.perimetro();
            break;
        default:
            cout << "Seleccione una opción válida" << endl;
    }

    return 0;
}
