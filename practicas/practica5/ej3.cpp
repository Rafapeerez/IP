//El programa asigna a un vector numeros aleatorios.
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
void fijaValorAleatorio(int v[], int n, int max) { //Funcion para dar valores aleatorios al vector
    int secs=time(0);
    srand(secs); //Inicializa el generador de numeros aleatorios.
    for(int i=0; i<n; i++) {
        int n=rand()%(max);
		  v[i]=n;
    }
}
void imprimir(int v[],int max,int n){
    for (int cont=0; cont<n; cont++) {
            cout<<"El elemento numero "<<cont<<" es: "<<v[cont]<<endl;
    }
}

int main() {
    int n,max;
	 cout<<"Introduce el numero de elementos del vector y pulse Intro."<<endl;
	 cin>>n;
	 cout<<"Introduzca el numero maximo de numeros los cuales se imprimiran para los elementos del vector y pulse Intro."<<endl;
    cin>>max;
    int v[n];
    fijaValorAleatorio(v,n,max);
    imprimir(v,max,n);


    system("pause");
}

