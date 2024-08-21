#include <iostream>
using namespace std;

int main() {
    int tipoPizza, ingrediente;

    cout << "Seleccione el tipo de pizza:\n";
    cout << "1. Vegetariana\n";
    cout << "2. No vegetariana\n";
    cout << "Ingrese su opcion: ";
    cin >> tipoPizza;

    switch (tipoPizza) {
        case 1:
            cout << "Seleccione un ingrediente:\n";
            cout << "1. Champiñones\n";
            cout << "2. Piña\n";
            cout << "3. Chile pimiento\n";
            cin >> ingrediente;
            cout << "Pizza vegetariana con queso, tomate y ";
            switch (ingrediente) {
                case 1: 
                    cout << "champiñones.\n"; 
                    break;
                case 2: 
                    cout << "piña.\n"; 
                    break;
                case 3: 
                    cout << "chile pimiento.\n"; 
                    break;
                default: 
                    cout << "ingrediente no valido.\n"; 
                    break;
            }
            break;

        case 2:
            cout << "Seleccione un ingrediente:\n";
            cout << "1. Jamon\n";
            cout << "2. Salami\n";
            cout << "3. Pepperoni\n";
            cin >> ingrediente;
            cout << "Pizza no vegetariana con queso, tomate y ";
            switch (ingrediente) {
                case 1: 
                    cout << "jamon.\n"; 
                    break;
                case 2: 
                    cout << "salami.\n"; 
                    break;
                case 3: 
                    cout << "pepperoni.\n"; 
                    break;
                default: 
                    cout << "ingrediente no valido.\n"; 
                    break;
            }
            break;

        default:
            cout << "Opcion no valida.\n";
            break;
    }
}
