#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, promedio, ExamenFinal, trabajoFinal, calificacionFinal;
    
    cout << "Ingrese la primera nota de la unidad: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota de la unidad: ";
    cin >> nota2;    
    cout << "Ingrese la tercera nota de la unidad: ";
    cin >> nota3;
    cout << "Ingrese la nota del examen final: ";
    cin >> ExamenFinal;
    cout << "Ingrese la nota del trabajo final: ";
    cin >> trabajoFinal;

    
    promedio = (nota1 + nota2 + nota3) / 3.0;
    calificacionFinal = (promedio * 0.55) + (ExamenFinal * 0.30) + (trabajoFinal * 0.15);
    cout << "La calificación final es: " << calificacionFinal << "\n";
    


}