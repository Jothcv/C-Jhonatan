#include <iostream>
using namespace std;
int main() {
    int cantidadNumeros;
    int suma0a25 = 0;
    int suma25a75 = 0;
    int sumaMayores36 = 0;
    int numero;
 
    cout << "Ingrese la cantidad de  ";
    cin >> cantidadNumeros;
    
    int contador = 0;
    do {
        cout << "Ingrese un numeroo: ";
        cin >> numero;

        if (numero >= 0 && numero <= 25) {
            suma0a25 += numero;
        }
        else if (numero>= 25 && numero <=75)
        {
            suma25a75 += numero;
        }
        else if (numero>36)
        {
            sumaMayores36 += numero;
        }
        
        contador++;
    } while (contador < cantidadNumeros);

    cout << "Suma de numeros entre 0 y 25: " << suma0a25 <<endl;
    cout << "Suma de numeros entre 25 y 75: " << suma25a75 <<endl;
    cout << "Suma de numeros mayores a 36: " << sumaMayores36 <<endl;

}
