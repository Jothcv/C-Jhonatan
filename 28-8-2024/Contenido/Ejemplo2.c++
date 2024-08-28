#include <iostream> 
using namespace std;

int main(){
    int num[5];
    cout<<"Ingrese 5 numeros: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"ingresa un numero: "<<i+1<<endl;
        cin>>num[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<num[i]<<",";
    }
}