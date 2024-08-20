#include <iostream>
using namespace std;

class vehiculo{
    private:
        string marca;
        string modelo;
        int anio;
    public:
        vehiculo(string _marca, string _modelo, int _anio){ //constructor
            marca = _marca;
            modelo = _modelo;
            anio = _anio;

        }
        void arrancar(){
            cout << "El "<<marca<<" "<<modelo<< "del "<<anio<<" esta avanzando"<<endl;
        }
        void detener(){
            cout << "El "<<marca<<" "<<modelo<< "del "<<anio<<" se detuvo"<< endl;
        }
};

class coche : public vehiculo{
    private:
        int numero_puertas;
    public:
        coche(string _marca, string _modelo, int _anio, int _numero_puertas) : vehiculo(_marca, _modelo, _anio){
            numero_puertas = _numero_puertas;
        }
        void tocar_claxon(){
            cout << "Ti-i tiii"<<endl;
        }
};
class motocicleta: public vehiculo{
    private:
        string tipo;
    public:
        motocicleta(string _marca, string _modelo, int _anio, string _tipo): vehiculo(_marca, _modelo, _anio){
            tipo = _tipo;
        }
        void hacer_wheelie(){
            cout << "whii"<<endl;
        }
};
int main(){
        coche c1("Toyota", "Corolla", 2020, 4);
        motocicleta m1("Yamaha", "R1", 2018, "Deportiva");

        c1.arrancar();
        c1.detener();
        c1.tocar_claxon();

        m1.arrancar();
        m1.detener();
        m1.hacer_wheelie();

    return 0;
}