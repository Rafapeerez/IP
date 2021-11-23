//Media ponderada de 3 valores.
#include<iostream>
using namespace std;
int main() {
    double practica;
    double examen;
    double parcial;
    double result;
    cout<<"Introduzca la nota de las practicas:"<<endl;
    cin >> practica;
    cout<<"Introduzca la nota de los parciales:"<<endl;
    cin >> parcial;
    cout<<"Introduzca la nota del examen:"<<endl;
    cin >> examen;
    result= ((practica*0.25)+(parcial*0.25)+(examen*0.5));//Operacion matematica para la ponderacion de cada valor.
    cout<<"Su nota final es: "<<result<<endl;

    cin.ignore();
    cin.get();

}