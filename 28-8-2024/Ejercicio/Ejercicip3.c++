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
void imprimir(Persona personas[5]);

int main() {
    Persona personas[5];

    for(int i = 0; i < 5; i++) {
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

void imprimir(Persona personas[5]) {
    for(int i = 0; i < 5; i++) {

        cout<<"-----------------------------------------------------------";
        cout << "Persona " << i + 1 << ":" << endl;
        cout << "nombre " << personas[i].nombre << endl;
        cout << "edad: " << personas[i].edad << endl;
        cout << "genreo " << personas[i].genero << endl;
        cout << "altura " << personas[i].altura << " m" << endl;
        cout << "departamento " << personas[i].departamento << endl;
        cout << endl;
    }
}