/*
    Ejercicio 2: Construye una clase llamada Triángulo que tenga los siguientes atributos: base y altura, y los siguientes métodos: area() y perimetro(lado1, lado2).
*/
#include <iostream>
using namespace std;

class triangulo{
    private:
        float base;
        float altura;
    public:
        triangulo(float _base, float _altura){
            base = _base;
            altura = _altura;
        }
        void area(){
            cout << "El area del triangulo es: "<< (altura * base)/2<<endl; 
        }
        void perimetro(){
            cout << "El perimetro del triangulo es: "<<base*3<<endl;
        }
};

int main(){

    float base, altura;
    int opcion;
    cout << "Digite la base y la altura del triangulo equilatero respectivamente: "<<endl;
    cin >> base >> altura;
    triangulo tri1(base,altura);
    cout << "Menu de opciones\n"
        <<"Digite 1 para calcular el area y 2 para el perimetro: "<<endl;
        cin >> opcion;
    
    if(opcion == 1){
        tri1.area();
    }else if(opcion == 2){
        tri1.perimetro();
    }else{
        cout << "Error numero invalido"<<endl;
    }
    return 0;
}