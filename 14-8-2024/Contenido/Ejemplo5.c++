#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float catA=0,catB=0,hip;
    cout<<"ingrese el valor del cateto A";
    cin>>catA;
    cout<<"ingrese el valor del cateto B";
    cin>>catB;
    hip=sqrt(catA+catB);
    cout<<"la hipotenusa es: "<<hip;
    return 0;
}
