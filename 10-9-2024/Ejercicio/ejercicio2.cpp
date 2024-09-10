#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

float Promedio(vector <int>& vec){
    float sumaPromedio=0;
    for (int i = 0; i < vec.size(); i++)
    {
        sumaPromedio+=vec[i];
    }
    return sumaPromedio / vec.size();   
}

int NumeroMayor(vector <int>& vec){
    int mayor=vec[0];
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i]>mayor)
        {
            mayor=vec[i];
        }
        
    }
    return mayor;
}

int NumeroMenor(vector <int>& vec){
    int menor=vec[0];
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i]<menor)
        {
            menor=vec[i];
        }
        
    }

    return menor;
}

void NumerosOrdenados(vector <int>& vec){
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i+1; j < vec.size(); j++)
        {
            if (vec[i]>vec[j])
            {
                int ord1=vec[i];
                vec[i]=vec[j];
                vec[j]=ord1;
            }
            
        }
        
    }
    cout<<"se ordenaron los elementos ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<endl;
    }
    
}

int main(){
    int tamañoVector;
    cout<<"ingrese el tamaño del vector: ";
    cin>>tamañoVector;

    vector <int> vector1(tamañoVector);
    for (int i = 0; i < tamañoVector; i++)
    {
        cout<<"ingrese el vector: ";
        cin>>vector1[i];
    }

    cout<<"aqui estan lo elementos del vector: ";
    for (int i = 0; i < vector1.size(); i++)
    {
        cout<<vector1[i]<<endl;
    }
    
    float promedio=Promedio(vector1);
    int mayor=NumeroMayor(vector1);
    int menor=NumeroMenor(vector1);

    cout<<"el promedio de los numeros ingresados es: "<<promedio;
    cout<<"le numero mayor es: "<<mayor;
    cout<<"el numero menor es: "<<menor;
    
}


