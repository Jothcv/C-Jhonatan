#include <iostream>
using namespace std;

int main(){
    int edad;
    float peso;

    cout<<"cuantos años tienes: "<<endl;
    cin>>edad;
    cout<<"cuanto pesas: "<<endl;
    cin>>peso;

    if (edad<18 && peso>150)
    {
        cout<<"usted no puede ingresar waza";
    }
    else if (edad>=18 && peso <=150)
    {
        cout<<"usted puede ingresar";
    }

}