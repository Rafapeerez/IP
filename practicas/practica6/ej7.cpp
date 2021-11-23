//Guarda el menor elemento de cada columna
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std;
void min_col(float m[4][4],float min[4]) {
    for(int j=0; j<4; j++) { //Recorremos las columnas
        int m2=m[0][j]; //Guardamos en la variable el primer elemento de cada columna
        for(int i=0; i<4; i++) { //Recorremos las filas
            if(m[i][j]<m2) { //Si ele elemento es menor al guardado inicialmente, 
                m2=m[i][j]; //este pasa a ser el valor de la variable
            }
        }
        min[j]=m2; //De tal forma que el vector recogera a los minimos valores de cada columna
    }
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
bool iguales(float m[4],float m2[4]){
		for(int i=0;i<4;i++)
				if (m[i]!=m2[i]) return false;
		return true;
}
int test(){
	
	float m[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float min[4];
	float min_res[4]={1,1,1,1};
	min_col(m,min);
	assert(iguales(min,min_res));
	
	
	float m2[4][4]={ {1,-1,-99999,211},{23,24,12,22},{33,43,-12,3},{124,4613,454,4312}};
	float min_res2[4]={1,-1,-99999,3};
	min_col(m2,min);
 	assert(iguales(min,min_res2));
	return 0;
	
	
}	


