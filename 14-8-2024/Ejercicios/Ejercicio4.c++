#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string Nombre;
    int grado,nota1,nota2,nota3,nota4,prom;
    cout<<"cual es tu nombre? ingresalo aqui: "<<Nombre<<endl;
    cin>>Nombre;
    cout<<"en que grados estas: "<<endl;
    cin>>grado;
    cout<<"ingresa su nota numero 1"<<endl;
    cin>>nota1;
    cout<<"ingresa su nota numero 2"<<endl;
    cin>>nota2;
    cout<<"ingresa su nota numero 3"<<endl;
    cin>>nota3;
    cout<<"ingresa su nota numero 4"<<endl;
    cin>>nota4;
    prom=(nota1+nota2+nota3+nota4)/4;
    cout<<"hola "<<Nombre<<" del grado "<<grado<<" tu promedio es de: "<<prom;
}