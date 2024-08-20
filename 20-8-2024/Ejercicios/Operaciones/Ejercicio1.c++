#include <iostream>
using namespace std;

int main(){
    float metros;
    float kilometros;
    float pulgadas;
    float pies;

    cout<<"Ingresa tu numero en metros ";
    cin>>metros;

    kilometros = metros / 1000.0;
    pulgadas = metros * 39.3701;
    pies = metros * 3.28084;

    cout<<"tu numero de metros a kilometros es: "<<kilometros<<"\n";
    cout<<"tu numero de metros a pulgadas es: "<<pulgadas<<"\n";
    cout<<"tu numero de metros a pies: "<<pies<<"\n";
}