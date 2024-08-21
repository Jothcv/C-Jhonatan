#include <iostream>
using namespace std;

int main() {
    int cantidad, billetes200, billetes100, billetes50, billetes20, billetes10, billetes5, billetes1;

    cout << "Ingrese el dinero: ";
    cin >> cantidad;

    billetes200 = cantidad / 200;
    cantidad %= 200;
    billetes100 = cantidad / 100;
    cantidad %= 100;
    billetes50 = cantidad / 50;
    cantidad %= 50;
    billetes20 = cantidad / 20;
    cantidad %= 20;
    billetes10 = cantidad / 10;
    cantidad %= 10;
    billetes5 = cantidad / 5;
    cantidad %= 5;
    billetes1 = cantidad;

    cout << "Billetes de 200.00 = " << billetes200 << "\n";
    cout << "Billetes de 100.00 = " << billetes100 << "\n";
    cout << "Billetes de 50.00 = " << billetes50 << "\n";
    cout << "Billetes de 20.00 = " << billetes20 << "\n";
    cout << "Billetes de 10.00 = " << billetes10 << "\n";
    cout << "Billetes de 5.00 = " << billetes5 << "\n";
    cout << "Billetes de 1.00 = " << billetes1 << "\n";

    return 0;
}