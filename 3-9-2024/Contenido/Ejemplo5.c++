#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fichero("Ejemplo.TXT");
    fichero<<"Ejemplo de archivo"<<endl;
    fichero<<"Jhonatan"<<endl;
    fichero<<"3/9/2024";
    fichero.close();
}