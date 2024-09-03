#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fichero("Ejemplo.TXT");
    string linea;
    fichero>>linea;
    cout<<"se cargo correctamente "<<endl;
    cout<<linea<<endl;
    fichero.close();
}