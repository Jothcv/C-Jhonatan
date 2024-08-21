#include <iostream>
using namespace std;

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de dinero Papu";
    cin >> cantidad;

    int billetes200 = cantidad / 200;
    cantidad %= 200;
    int billetes100 = cantidad / 100;
    cantidad %= 100;
    int billetes50 = cantidad / 50;
    cantidad %= 50;
    int billetes20 = cantidad / 20;
    cantidad %= 20;
    int billetes10 = cantidad / 10;
    cantidad %= 10;
    int billetes5 = cantidad / 5;
    cantidad %= 5;
    int billetes1 = cantidad;

    cout << "Billetes de Q200.00 = " << billetes200 << endl;
    cout << "Billetes de Q100.00 = " << billetes100 << endl;
    cout << "Billetes de Q50.00 = " << billetes50 << endl;
    cout << "Billetes de Q20.00 = " << billetes20 << endl;
    cout << "Billetes de Q10.00 = " << billetes10 << endl;
    cout << "Billetes de Q5.00 = " << billetes5 << endl;
    cout << "Billetes de Q1.00 = " << billetes1 << endl;

    return 0;
}
