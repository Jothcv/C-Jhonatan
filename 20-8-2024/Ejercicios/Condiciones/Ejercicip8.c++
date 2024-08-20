#include <iostream>
using namespace std;

int main(){
    char TieneTitulo,superoPrueba;

    cout<<"Tienes un titulo bachiller? (s/n)";
    cin>>TieneTitulo;

    if (TieneTitulo=='s')
    {
        cout<<"paso la prueba "<<endl;
    }
    else{
        cout<<"usted ha suoerado la prueba de acceso"<<endl;
        cin>>superoPrueba;

        if (superoPrueba=='s')
        {
            cout<<"Perfecto usted puede acceder al grado de educacion universarl superiori ";
        }
        else{
            cout<<"Nimodos no puedes acceder al grado superior";
        }
        
    }
    
}

