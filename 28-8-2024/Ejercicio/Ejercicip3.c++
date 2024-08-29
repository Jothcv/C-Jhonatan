#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
    string genero;
    float altura;
    string departamento;
};

void interseccion();
void imprimir(Persona personas[2]);

int main() {
    Persona personas[2];

    for(int i = 0; i < 2; i++) {
        cout << "Ingresa los datos de la persona " << i + 1 << ":" << endl;

        cout << "Nombre: ";
        cin >> personas[i].nombre;

        cout << "Edad: ";
        cin >> personas[i].edad;

        cout << "Género: ";
        cin >> personas[i].genero;

        cout << "Altura: ";
        cin >> personas[i].altura;

        cout << "Departamento: ";
        cin >> personas[i].departamento;

        cout << endl;
    }
    interseccion();
    imprimir(personas);

    return 0;
}

void interseccion(){
    cout<<"aqui se muestran a las personas que se ingresaron:"<<endl;
}

void imprimir(Persona personas[2]) {
    for(int i = 0; i < 2; i++) {

        cout<<"-----------------------------------------------------------";
        cout << "Persona " << i + 1 << ":" << endl;
        cout << "Nombre: " << personas[i].nombre << endl;
        cout << "Edad: " << personas[i].edad << endl;
        cout << "Género: " << personas[i].genero << endl;
        cout << "Altura: " << personas[i].altura << " m" << endl;
        cout << "Departamento: " << personas[i].departamento << endl;
        cout << endl;
    }
}