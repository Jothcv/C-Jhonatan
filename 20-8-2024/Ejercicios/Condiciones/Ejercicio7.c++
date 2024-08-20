#include <iostream>
using namespace std;

int main() {
    float total_preguntas, correctas;
    float porcentaje;

    cout << "Ingrese el total de preguntas: ";
    cin >> total_preguntas;
    cout << "Ingrese la cantidad de respuestas correctas: ";
    cin >> correctas;

    porcentaje = (correctas / total_preguntas) * 100;

    if (porcentaje >= 90) {
        cout << "Nivel maximo tu porcentaje es de "<<porcentaje << endl;
    } else if (porcentaje >= 75) {
        cout << "Nivel medio tu porcentaje es de "<<porcentaje << endl;
    } else if (porcentaje >= 50) {
        cout << "Nivel regular tu porcentaje es de "<<porcentaje << endl;
    } else {
        cout << "Fuera de nivel tu porcentaje es de"<<porcentaje << endl;
    }

    return 0;
}