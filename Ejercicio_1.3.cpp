/*
    Ejercicio 3: Construye una clase llamada Cuadrado que tenga los siguientes atributos: lado, y los siguientes métodos: perimetro() y area().
*/

// I start programming

#include <iostream>
#include <math.h>
using namespace std;

class cuadrado{
    private:
        float lado;
    public:
        cuadrado(float _lado){ // constructor
            lado = _lado;
        }
        //metodos
        void perimetro(){
            cout << "El perimetro del cuadrado con lado " << lado << " es: " << lado*4<<endl;
        }
        void area(){
            cout << "El area del cuadrado con lado " << lado << " es: " << pow(lado, 2); 
        }
        
};


int main(){
    int opcion;
    float lado;
    cout << "Hola que tal, buenos dias esta en la seccion de calculo de area y perimetro de un cuadrado.\nDicho esto\nDigite 1 si desea calcular el area\nDigite 2 si desea calcular el perimetro" << endl;
    cin >> opcion;

    cout << "Bien , Ahora brindenos el lado del cuadrado por favor."<< endl;
    cin >> lado;
    cuadrado cuad1(lado);
    if(opcion == 1){
        cuad1.area();
    }else if(opcion == 2){
        cuad1.perimetro();
    }else{
        cout << "Digite un opcion valida.";
    }
    return 0;
}