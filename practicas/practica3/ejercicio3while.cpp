//El programa dice si el numero introducido es primo o no (uso del esquema while)
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Introduce un numero y pulse Intro: "<<endl;
    cin>>a;
    b=0;
    c=a; // Igualamos el dividendo al numero introducido para a empezar a dividir por algun valor.
    while (c>0) { // Mientras que el dividendo sea mayor a 0 se ejecutara el IF que esta introducido en el.
        if (a%c==0) { // Si el cociente entre el numero introducido y el dividendo es igual a 0 se le suma uno al contador.
            b++;
        }
        c=c-1; // Se le va restando uno al dividendo hasta llegar a 1.
    }
    if(b>2) {
        cout<<"El numero no es primo."<<endl;
    }
    else {
        cout<<"El numero es primo."<<endl;
    }
    system("pause");
}

