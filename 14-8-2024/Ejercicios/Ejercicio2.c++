#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1,elevado,result;

    cout<<"Ingrese su valor a elevar ";
    cin>>num1;
    cout<<"Ingresa tu valorr que elevara al primero ";
    cin>>elevado;
    result=(pow(num1,elevado));
    cout<<"el valor "<<num1<<" elevado al "<<elevado<<" es "<<result;

    return 0;
}
    