/*  Ejercicio 1:
    construya una clase llamada Rectángulo que tenga los siguientes atributos: 
    largo y ancho, y los siguientes métodos: perímetro() y área(). 
*/

//  I start programming

#include <iostream>
using namespace std;

class Rectangulo{
    private: // Atributos
        float largo;
        float ancho;
    public: //Metodos
        Rectangulo(float,float);
        void perimetro();
        void area();
};

Rectangulo::Rectangulo(float _largo, float _ancho){
    largo = _largo;
    ancho = _ancho; 
}

void Rectangulo::perimetro(){
    cout<<"El perimetro del rectangulo es "<<2*(largo+ancho);
}

void Rectangulo::area(){
    cout<<"El area del rectangulo es "<<largo*ancho;
} 

int main(){
    string opcion;
    float largo,ancho;
    cout<<"Hello, this is a class test in C++.\nDo you want to calculate the area or perimeter of the rectangle?\n";
    cin>>opcion;
    cout << "Digite el largo y ancho respectivamente: "<<endl;
    cin>>largo>>ancho;
    Rectangulo r1(largo,ancho);

    if(opcion=="Area" || opcion == "area"){
        r1.area();
    }else if(opcion == "Perimeter" || opcion == "perimetro" || opcion == "Perimetro" || opcion =="perimeter"){
        r1.perimetro();
    }
    return 0;
}