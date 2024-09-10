#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main(){
    vector<int> vector1;
    for (int i = 0; i < 10; i++)
    {
        vector1.push_back(i);

    }

    for (int i = 0; i < 10; i++)
    {
        cout<<"aqui se muestran: "<<vector1[i]<<endl;
    }
    
    
}