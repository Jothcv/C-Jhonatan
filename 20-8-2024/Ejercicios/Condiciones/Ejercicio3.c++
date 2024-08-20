#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Ingrese tres numeros  ";
    cin >> num1;
    cout << "Ingrese tres numeros  ";
    cin >> num2;
    cout << "Ingrese tres numeros  ";
    cin>> num3;

    if (num1 < num2 && num2 < num3) {
        cout << "Los numeros estan en orden ascendente." << endl;
    } else if (num1 > num2 && num2 > num3) {
        cout << "Los numeros estan en orden descendente." << endl;
    } else {
        cout << "Los numeros estan desordenados." << endl;
    }

}
