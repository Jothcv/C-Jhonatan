//POLIMORFISMO
#include <iostream>
#include <string.h>
using namespace std;

class Animal{
    public:
    virtual void hablar()=0;
};

class Perro:Animal{
    public:
        void hablar() override{
            cout<<"El perro hacer: gua guau \n";
        }
};

class Gato:Animal{
    public:
        void hablar() override{
            cout<<" el gato hace: meow meow \n";
        }
};

int main(){
    Perro nahual;
    Gato nahuanio;
    nahual.hablar();
    nahuanio.hablar();
}