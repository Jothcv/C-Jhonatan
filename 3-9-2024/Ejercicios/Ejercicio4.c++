#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main() {
    string nombreArchivo;
    string nombre;
    
    cout << "Ingrese el nombre del archivo ";
    cin >> nombreArchivo;
    
    ofstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) {
        cout << "Error efesota" <<endl;
        return 1;
    }
    
    cout << "Ingrese 10 nombres: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Nombre " << i+1 << " ";
        cin >> nombre;
        archivo << nombre << endl;
    }
    
    archivo.close();
    
    
}