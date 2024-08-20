#include <iostream>
using namespace std;

int main(){
    int edad;
    cout<<"cuantos años tienes: "<<endl;
    cin>>edad;

    if (edad<=5)
    {
        cout<<"usted no paga nada";
    }
    else if (edad >=6 && edad<=17)
    {
        cout<<"el precio de su entrada es de 15"<<endl;
    }
    else{
        cout<<"su entrada es de 25"<<endl;
    }
    
    
}