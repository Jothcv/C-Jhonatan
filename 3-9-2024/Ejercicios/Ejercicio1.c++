#include <iostream>
#include <string.h>
using namespace std;

class Rectangulo{
    public:
    float largo;
    float ancho;
    float areag;
    float peri;

    void area(){
        
        areag=largo*ancho;
        cout<<"el area del rectangulo es: "<<areag<<endl;
    }

    void perimetros(){
        peri=2*(largo+ancho);
        cout<<"el perimetro del rectangulo es; "<<peri;
    }
};

int main(){
    float lar;
    float an;
    cout<<"ingresa el largo del rectangulo: ";
    cin>>lar;
    cout<<"ingresa el ancho: ";
    cin>>an;

    Rectangulo area1;
    area1.largo=lar;
    area1.ancho=an;
    area1.area();
    area1.perimetros();


}