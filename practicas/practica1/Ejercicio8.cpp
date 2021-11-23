//El programa imprime el mayor de los 3 resultados.
#include<iostream>
using namespace std;
int main() {
    double a;
    double b;
    double c;
    cout<<"Inserte tres valores y pulse Intro: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if ((a>b)&&(a>c)) { //Si a es el mayor, lo imprime
        cout<<"El numero ";
        cout<<a<<" es el mayor."<<endl;
    }
    else if ((b>c) && (b>a)) { //Si lo es b, lo imprime.
        cout<<"El numero ";
        cout<<b<<" es el mayor."<<endl;
    }
    else if ((c>b) && (c>a)) {
        cout<<"El numero ";
        cout<<c<<" es el mayor."<<endl;
    }
    cin.ignore();
    cin.get();
}