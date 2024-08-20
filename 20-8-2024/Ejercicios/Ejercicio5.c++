#include <iostream>
using namespace std;

int main() {
    int hombres, mujeres, total;
    double porcentaje_hombres, porcentaje_mujeres;
    
    cout << "Ingrese la cantidad de hombres en el grupo: ";
    cin >> hombres;
    
    cout << "Ingrese la cantidad de mujeres en el grupo: ";
    cin >> mujeres;
    
    total = hombres + mujeres;
    porcentaje_hombres = (hombres / (double)total) * 100;
    porcentaje_mujeres = (mujeres / (double)total) * 100;
    
    cout << "Porcentaje de hombres: " << porcentaje_hombres << "%" << endl;
    cout << "Porcentaje de mujeres: " << porcentaje_mujeres << "%" << endl;
    
    return 0;
}
