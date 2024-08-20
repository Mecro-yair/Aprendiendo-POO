/*
    Determinar si un numero es primo o no; con punteros y además indicar en que posicion de memoria se guardo el número.
*/

#include <iostream>
using namespace std;

int main(){
    int numero, cont = 0, *dir_numero;
    
    cout << "Digite un numero a analizar: "<< endl ; cin >> numero;

    dir_numero = &numero;

    for(int i=1;i<=*dir_numero; i++){
        if(*dir_numero % i == 0){
            cont++;
        }
    }
    if(cont==2){
        cout<<"El numero "<<*dir_numero<<" es primo."<<endl;
    }else{
        cout<<"El numero "<<*dir_numero<<" no es primo"<<endl;
    }
    cout<<"El numero se guardo en la siguiente direccion: "<<dir_numero<<endl;
    return 0;
}