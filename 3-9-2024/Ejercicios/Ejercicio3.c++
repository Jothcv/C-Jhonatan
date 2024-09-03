#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string palabra;
    ofstream archivo("palabras.txt");
    while (palabra != "Ciem") {
        cout << "Ingresa sus palabras ";
        cin >> palabra;

        if (palabra != "Ciem") {
            archivo << palabra <<endl; 
        }
    }

    cout << "El programa finallizo exitosamente: " <<endl;
    archivo.close(); 
    
}
