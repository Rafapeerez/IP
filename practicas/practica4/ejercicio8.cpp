//El programa dice si el numero es perfecto o no.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
bool esperfecto(int v) {
    int n=v,suma=0;
    bool res;
    for (int cont=1; cont<n; cont++) {
        if(n%cont==0) {
            suma=suma+cont;
        }
    }
    if (suma==n) {
        res=true;
    }
    else {
        res=false;
    }
    return res;
}
int main() {
    int numero;
    cout<<"Introduzca un numero para ver si es perfecto o no."<<endl;
    cin>>numero;
	 bool ep=esperfecto(numero);
    if(ep==true) {
        cout<<"El numero es perfecto."<<endl;
    }
    else {
        cout<<"El numero no es perfecto."<<endl;
    }
    system("pause");
}

