#include <iostream>
using namespace std;

int main(){
    string contrasena="UMG2024";
    string con;

    cout<<"ingresa tu contrasena ";
    cin>>con;

    if (con==contrasena)
    {
        cout<<"contraseña correcta";
    }
    else{
        cout<<"contraseña incorrecta";
    }
    
}