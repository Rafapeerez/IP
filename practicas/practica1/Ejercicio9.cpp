//Dependiendo del valor introducido correspondiente a un mes,indica los dias que tiene cada uno.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int mes;
    cout<<"Introduce un numero del 1 al 12 correspondientes a cada mes y pulse Intro:"<<endl;
    cin>> mes;
    if ((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12)) { //Si es algun de los meses introducidos, se imprimira que tiene 31 dias.
        cout<<"Este mes tiene 31 dias."<<endl;
    }
    else if ((mes==4)||(mes==6)||(mes==9)||(mes==11)) {
        cout<<"Este mes tiene 30 dias."<<endl;
    }
    else if (mes==2) {
        cout<<"Estes mes tiene 28/29 dias"<<endl;
    }
    cin.ignore();
    cin.get();
}

