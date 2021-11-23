// Te dice si el valor introducio es o no primo.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Introduce un numero y pulse Intro: "<<endl;
    cin>>a;
    b=0;
    c=a;
    do {
        if (a%c==0) { // Si el resto dividido entre si mismo solamente es 0, el numero es primo.
            b=b+1;
        }
        c=c-1;
    } while (c>0);
    if (b>2) {
        cout<<"El numero no es primo"<<endl;
    }
    else {
        cout<<"El numero es primo"<<endl;
    }
    system("pause");
}

