//Suma de los numeros impares precedidos a un valor introducido.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    unsigned int numero;
    cout<<"Introduce un numero y pulse Intro:"<<endl;
    cin>>numero;
    int resultado=0;
    do {
        if (numero%2==0) { //Si el numero es par se le resta 1.
            numero=numero-1;
        }
        else (numero%2 >0); // Si no es par el resultado se le suma al numero.
        {
            resultado=resultado + numero;
        }
        numero=numero-1;
    } while (numero>0); //Esto se repite mientras el numero sea mayor que 0.
    cout<<"El resultado de la suma es: "<<resultado<<endl;

    system("pause");
}

