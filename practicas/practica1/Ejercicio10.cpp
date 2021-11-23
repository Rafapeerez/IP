//El programa indica si el numero introducido es par o impar.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int numero;
    int result;
    cout<<"Introduce un numero y pulse Intro:"<<endl;
    cin>>numero;
    result=numero%2;//El resultado es el resto de la division entre 2.
    if (result==0) { //Si el resto es 0:
        cout<<"El numero introducido es par."<<endl;
    }
    else if (result==1) { //Si el resto es 1:
        cout<<"El numero introducido es impar."<<endl;
    }
    cin.ignore();
    cin.get();
}

