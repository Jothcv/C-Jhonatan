#include <iostream>
#include <string.h>
using namespace std;

class Persona{
    public:
    string Nombre;
    int edad;
        void mostrarNomEd(){
            cout <<"el nombre es: "<<Nombre;
            cout<<"la edad es: "<<edad;
        }
        
};

class Empleado:public Persona{
    public:
    float sueldo;
        void mostrarSueldo(){
            cout<<"el sueldo es: "<<sueldo;
        }
};

class Estudiante:public Persona{
    public:
    float NotaFinal;
        void mostrarNot(){
            cout<<"la nota final es: "<<NotaFinal;
        }
};

class Universitario:public Estudiante{
    public:
    string Carrera;
        void mostrarCarr(){
            cout<<"la carrera es: "<<Carrera;
        }
};

int main(){
    string Nombre1;
    int edad1;
    float sueldo1;
    float notaFinal1;
    string carrera1;
    cout<<"ingrese el nombre ";
    cin>>Nombre1;

    cout<<"ingrese la edad: ";
    cin>>edad1;

    cout<<"ingrese el sueldo: ";
    cin>>sueldo1;

    cout<<"ingrese la nota final: ";
    cin>>notaFinal1;

    cout<<"ingresa la carrera: ";
    cin>>carrera1;

    Universitario uni;
    Empleado emp;
    uni.Nombre=Nombre1;
    uni.edad=edad1;
    uni.NotaFinal=notaFinal1;
    uni.Carrera=carrera1;
    emp.sueldo=sueldo1;
    

    uni.mostrarNomEd();
    uni.mostrarNot();
    uni.mostrarCarr();

    emp.mostrarSueldo();


}