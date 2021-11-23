//Cada numero del 1 al 7 se le corresponde un dia de la semana.
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int dia;
    cout<<"Introduzca un numero del 1 al 7, correspondiente a cada dia de la semana y pulse Intro: "<<endl;
    cin>>dia;
    switch (dia) { //Si la variable dia toma algun valor del 1 al 7, dependiendo del valor se imprime un dia por pantalla.
    case 1 : {
        cout<<"Es lunes."<<endl;
    }
    break;

    case 2 : {
        cout<<"Es martes."<<endl;
    }
    break;
    case 3 : {
        cout<<"Es miercoles."<<endl;
    }
    break;
    case 4 : {
        cout<<"Es jueves."<<endl;
    }
    break;
    case 5 : {
        cout<<"Es viernes."<<endl;
    }
    break;
    case 6 : {
        cout<<"Es sabado."<<endl;
    }
    break;
    case 7 : {
        cout<<"Es domingo."<<endl;
    }
    break;

    default : { //Si no es ninguno de los casos anteriores,se imprime por pantalla lo siguiente.
            cout<<"El numero no corresponde a ningun dia."<<endl;
        }
    }
    system("pause");
}

