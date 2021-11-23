//Devuelve el numero de veces que se encuentra el valor(val) en la matriz.
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std;
int find(float m[4] [4], float val) { //Creamos la funcion y la matriz 4x4
    int cont=0; //Creamos la variable del contador e igualamos a 0.
    for(int i=0; i<4; i++) { //Creamos el buscador de elementos de la matriz
        for(int j=0; j<4; j++) {
            if(m[i][j]==val) { // Si en esta busqueda algun elemento de la matriz es igual al valor
                cont ++; // El contador se le sumara 1
            }
        }
    }
    return cont;
}

//// 
int test();//indica que la funcion test esta mas abajo
int main(){ 
		test();
		cout<<"Correcto"<<endl;
		system("pause");
		return 0;

}
//funcion de test
int test(){
	
	float m[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	assert(  find(m,1 )==4);
	assert(  find(m,2 )==4);
	assert(  find(m,-1 )==0);
	return 0;
}	


