//HERENCIA
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

class Estudiante:public Persona{
    public:
    string carrera;

    void estudiar(){
        cout<<"esoy estudianto la carrera de: "<<carrera;
    }
};


int main(){
    Estudiante estudiante1;
    estudiante1.nombre="elpapu";
    estudiante1.edad=13;
    estudiante1.genero="hombre";
    estudiante1.carrera="chile";
    estudiante1.saludar();
    estudiante1.estudiar();
}