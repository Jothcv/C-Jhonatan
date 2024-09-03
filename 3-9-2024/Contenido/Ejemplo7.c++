#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string nombre;
    string linea;


    ifstream fichero("Ejemplo");
    if (fichero.fail())
    {
        
        exit(1);
    }

    while (!fichero.eof())
    {
        getline(fichero, linea);
        if (!fichero.eof())
            cout << linea << endl;
    }
    fichero.close();

    return 0;
}