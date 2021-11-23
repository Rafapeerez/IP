//El progama piensa un numero del 1 al 1000 y hay que adivinarlo con una serie de pistas.
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include<ctime>
using namespace std;

int main() {
    std::srand(time(0));
    int secreto=rand()%1000; // Se crea el numero secreto del 1 al 1000 en una variable y se queda guardado.
//    cout<<secreto<<endl;
    int numero;
    cout<<"Acierta el numero que esta pensando el programa. Introduzca un numero y pulse Intro: "<<endl;
    cin>>numero;
    while (secreto!=numero) { // Mientras que el numero introducido no sea el mismo al introducido se iran ejecutando los IF que estan en el interior.
    if(numero<secreto) { // Si el numero introducido es menor al secreto,se imprime en la pantalla que es menor y vuelve a pedir un numero.
            cout<<"El numero introducido es menor al secreto,vuelve a intentarlo."<<endl;
            cin>>numero;
        }
    if (numero>secreto) { // Si el numero introducido es mayor al secreto,se imprime en la pantalla que es mayor y vuelve a pedir un numero.
            cout<<"El numero introducido es mayor al secreto,vuelve a intentarlo."<<endl;
            cin>>numero;
        }
    }
    if (numero==secreto) { // Si es el mismo, se imprime el texto y se acaba el programa
        cout<<"CORRECTO!!! HAS ACERTADO"<<endl;
        }

    system("pause");
}

