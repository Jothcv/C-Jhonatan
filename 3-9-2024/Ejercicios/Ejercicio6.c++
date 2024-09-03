#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string filename="prueba.txt";

    ofstream file;
    file.open(filename,ios::app);

    if (!file)
    {
        cerr<<"error al abriri el archivo "<<endl;
        return 1;
    }

    string linea;
    cout<<"Introduce la linea de texto que deseas agregar: ";
    getline(cin,linea);

    file<<linea<<endl;

    file.close();

    cout<<"Linea agregada con exito "<<endl;
}