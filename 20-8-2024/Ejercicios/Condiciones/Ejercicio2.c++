#include <iostream>
using namespace std;

int main() {
    char letra;
    cout << "Ingrese una letra (S o N): ";
    cin >> letra;

    if (letra == 'S' || letra == 'N') {
        cout << "La letra es correcta." << endl;
    } else {
        cout << "La letra es incorrecta." << endl;
    }
}
