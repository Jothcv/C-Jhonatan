#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++)
    {
        int num1;
        cout<<"ingresa tu numero. "<<i+1<<endl;
        cin>>num1;

        if (i%num1==0)
        {
            cout<<"tu numero es primo: "<<num1;
        }
        else{
            cout<<"no es primo";
        }

    }
    
}