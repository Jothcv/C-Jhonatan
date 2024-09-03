//encapsulamiento
#include <iostream>
#include <string.h>
using namespace std;

class Vehiculo{
    private:
        int velocidad;
        public:

            void acelerar(){
                velocidad++;
                
            }

            int getvelocidad(){
                return velocidad;
            }

};

int main(){
    Vehiculo carrito1;
    carrito1.acelerar();
    carrito1.acelerar();
    cout<<"la velocidad es: "<<carrito1.getvelocidad();
}


//clase objeto erencia polimorfismo que es y como se hace 