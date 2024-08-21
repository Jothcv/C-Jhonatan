#include <iostream>
using namespace std;

int main() {
    float compra, descuento = 0;

    cout << "Ingrese  la compra: Q.";
    cin >> compra;

    if (compra <= 500.00) {
        descuento = 0;
    } else if (compra <= 1000.00) {
        descuento = 0.10; 
    } else if (compra <= 2500.00) {
        descuento = 0.15; 
    } else {
        descuento = 0.20; 
    }

    float total = compra - (compra * descuento);
    cout << "El descuento es: " << (descuento * 100) << "%\n";
    cout << "El total a pagar es: Q." << total << "\n";

}
