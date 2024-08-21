#include <iostream>
using namespace std;

int main() {
    int opcionCafe, opcionLeche;
    bool conLeche = false;

    cout << "Bienvenido a la Cafeteria El Cafetalito" << endl;
    cout << "1. Cafe" << endl;
    cout << "2. Cafe con leche" << endl;
    cout << "Elija una opcion (1 o 2): ";
    cin >> opcionCafe;

    switch(opcionCafe) {
        case 1:
            cout << "Tipos de Cafe disponibles:" << endl;
            cout << "1. Expreso" << endl;
            cout << "2. Americano" << endl;
            cout << "3. Ristretto" << endl;
            cout << "Elija una opcion: ";
            cin >> opcionLeche;

            switch(opcionLeche) {
                case 1:
                    cout << "Ha elegido un Cafe expreso con azucar." << endl;
                    break;
                case 2:
                    cout << "Ha elegido un Cafe americano con azucar." << endl;
                    break;
                case 3:
                    cout << "Ha elegido un Cafe ristretto con azucar." << endl;
                    break;
                default:
                    cout << "Opcion no valida." << endl;
            }
            break;

        case 2:
            conLeche = true;
            cout << "Tipos de Leche disponibles:" << endl;
            cout << "1. Entera" << endl;
            cout << "2. Descremada" << endl;
            cout << "3. Deslactosada" << endl;
            cout << "Elija una opcion: ";
            cin >> opcionLeche;

            switch(opcionLeche) {
                case 1:
                    cout << "Ha elegido un Cafe con leche entera y azucar." << endl;
                    break;
                case 2:
                    cout << "Ha elegido un Cafe con leche descremada y azucar." << endl;
                    break;
                case 3:
                    cout << "Ha elegido un Cafe con leche deslactosada y azucar." << endl;
                    break;
                default:
                    cout << "Opcion no valida." << endl;
            }
            break;

        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}
