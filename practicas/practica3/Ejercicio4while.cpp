//Divisores de un numero en forma ascendente (uso del esquema while)
#include<cstdio>
#include<cstdlib>
#include<iostream>

using namespace std;
int main(){
int a,b;
cout<<"Introduce un numero y pulse Intro para saber sus divisores: "<<endl;
cin>>a;
b=1; //Igualamos el divisor primeramente a 1 para ir de forma ascendente.
cout<<"Los divisores de "<<a<<" son:"<<endl;
while (b<=a){ //Mientras que el divisor sea menor o igual que el dividendo se ejecutara el IF que esta en el interior.
if (a%b==0){ //Mientras el cociente de la division sea 0 significa que es un divisor por lo que se imprimira por pantalla y se le suma 1 al divisor de la operacion.
cout<<b<<",";
}
b++;
}
cout<<""<<endl;

cin.get();
cin.ignore();
}