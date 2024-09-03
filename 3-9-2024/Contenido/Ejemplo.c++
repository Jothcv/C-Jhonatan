#include <iostream>
#include <string.h>
using namespace std;

class Persona {
    public:
    string nombre;
    int edad;
    string genero;

void saludar(){
    cout<<"hola "<<nombre<<" con la edad de "<<edad<<" y el genero de: "<<genero;
    }
};


int main(){
    string nom;
    int ed;
    string gen;

    cout<<"ingrese su nombre: ";
    cin>>nom;

    cout<<"ingrese la edad: ";
    cin>>ed;

    cout<<"ingrese su genero: ";
    cin>>gen;

    Persona persona1;
    persona1.nombre=nom;
    persona1.edad=ed;
    persona1.genero=gen;
    persona1.saludar();
}
