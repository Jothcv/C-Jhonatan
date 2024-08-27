#include <iostream>
using namespace std;

int main(){
    int numeros;
    int contPrimos = 0;
    int contCompuesto = 0;
    for(int i = 1; i <= 10; i++){
        int contador = 0;
        cout <<"Ingrese el numero "<<i<<": ";
        cin >>numeros;
        for(int j = 1; j <= numeros; j++){
            if(numeros % j == 0){
                contador++;
            }
        }
        if(contador == 2){
            contPrimos++;
        }
        else{
            contCompuesto++;
        }
    }
    cout <<"La cantidad de numeros primos son: "<<contPrimos<<endl;
    cout <<"La cantidad de numeros compuestos son: "<<contCompuesto<<endl;
}
