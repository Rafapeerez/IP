//El programa calcula el factorial del valor introducido.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    double a,fact; 
    fact=1;
    cout<<"Introduce un valor para calcular su factorial."<<endl;
    cin>>a;
    while (a>=1) { //Siempre que el numero sea mayor o igual que 1, se multiplica por su anterior y se resta 1.
        fact=fact*a;
        a=a-1;
    }
    cout<<"El factorial es: "<<fact<<endl;
    system("pause");
}

