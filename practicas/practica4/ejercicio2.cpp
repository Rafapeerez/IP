//El programa dice si un numero introducido es primo o no
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

bool esprimo(int v) { //Se declara la variable booleana esprimo, que hace los calculos necesarios para saber si un numero es primo o no.
    bool res; //El resultado se recoge en la variable booleana (true o false)
    int div,b=0;
    for (div=v; div>0; div--) {
        if(v%div==0) {
            b++;
        }
    }
    if(b>2) {
        res=false;
    }
    else {
        res=true;
    }
    return res; //Retorno del resultado.
}
int main() {
    int n;
    cout<<"Introduzca un numero y el programa dira si es primo: "<<endl;
    cin>>n;
    bool final=esprimo(n); //En la variable final se guardara el resultado, tras haberse ejecutado la funcion esprimo para un numero introducido por teclado.
    if (final==true) {
        cout<<"Es primo."<<endl;
    }
    else {
        cout<<"No es primo."<<endl;
    }


    system("pause");
}

