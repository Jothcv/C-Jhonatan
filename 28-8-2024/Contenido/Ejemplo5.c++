#include <iostream>
using namespace std;

struct Personas
{
    int edad;
    string nombre;
    float altura;
    string departamento;
    string genero;
};

void imprimir(Personas persona1);

int main(){
    Personas persona1;
    persona1.nombre="su nombre";
    persona1.edad=15;
    persona1.genero="masculino";
    persona1.altura=1.63;
    persona1.departamento="cantel";
    imprimir(persona1);

    
}

void imprimir(Personas persona1){
    cout<<"el nombre es: "<<persona1.nombre<<endl;
    cout<<"la edad es; "<<persona1.edad<<endl;
    cout<<"el genero es: "<<persona1.genero<<endl;
    cout<<"la altura es de: "<<persona1.altura<<endl;
    cout<<"el departamento es de: "<<persona1.departamento<<endl;   
}

