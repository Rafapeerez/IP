//Indica si un numero introducido es mayor,menor o igual a 0.
#include<iostream>
using namespace std;
int main(){
  int numero;
  cout<<"Introduzca un numero cualquiera y pulse Intro: "<<endl;
  cin >> numero;
if (numero>0){ //Si el numero es mayor que 0 se imprime lo siguiente.
       cout<<"El numero es mayor que 0."<<endl;
}
   else if (numero<0){ //Si el numero es menor que 0 se imprime lo siguiente.
       cout<<"El numero es menor que 0"<<endl;
 }
   else if (numero==0){
       cout<<"El numero es 0"<<endl;
 }
cin.ignore();
cin.get();
}