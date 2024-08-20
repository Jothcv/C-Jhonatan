#include <iostream>
using namespace std;

int main() {
    const double sueldo_base = 5000;
    double venta1, venta2, venta3, comision, sueldo_total;
    
    cout << "Ingrese el monto de la primera venta: ";
    cin >> venta1;
    cout << "Ingrese el monto de la segunda venta: ";
    cin >> venta2;
    cout << "Ingrese el monto de la tercera venta: ";
    cin >> venta3;
    
    comision = (venta1 + venta2 + venta3) * 0.10;
    sueldo_total = sueldo_base + comision;
    
    cout << "Comisión por ventas: Q" << comision << endl;
    cout << "Sueldo total del mes: Q" << sueldo_total << endl;
    
    return 0;
}
