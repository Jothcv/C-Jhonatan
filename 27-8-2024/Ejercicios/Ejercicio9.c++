#include <iostream>
using namespace std;

int main() {
    int regaloInicial = 5;
    int limiteTotal = 500;

    int edad = 10; 
    int totalRecibido = regaloInicial;
    do
    {
        totalRecibido *= 2;
        edad++;
    } while (totalRecibido<limiteTotal);
    cout << "juanita tendra " << edad << " años cuando reciba mas de " << limiteTotal <<endl;
    cout << "El total de dinero recibido sera de Q" << totalRecibido <<endl;

}
