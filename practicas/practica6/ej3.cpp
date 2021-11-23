//La funcion devuelve la suma de los elementos de la diagonal principal
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std;
float trace(float m[4][4]) {
    float suma=0; //Creamos la variable de la suma e igualamos a 0
    for(int i=0; i<4; i++) { //Vamos recorriendo solo las filas
        suma=suma+m[i][i]; //Vamos sumando al valor de la suma los elementos i de la diagonal
    }
    return suma;
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
	assert( trace(m)== 10 );
	return 0;
}	


