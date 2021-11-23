//Transponer una matriz sin utilizar una matriz auxiliar
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std;
void transpose(float m[4][4]) {
    for(int i=0; i<4; i++) {
        for(int j=i+1; j<4; j++) { //j=i+1 para que sea la mitad de la matriz y no se quede al final de la ejecucion la matriz igual que estaba
            int aux=m[i][j]; //Creamos un auxiliar que en este caso no es otra matriz, si no una variable donde guardar los valores de los elementos que vayamos a guardar, para que no haya perdidas de valores
            m[i][j]=m[j][i];
            m[j][i]=aux;
        }
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
bool iguales(float m[4][4],float m2[4][4]){
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				if (m[i][j]!=m2[i][j]) return false;
		return true;
}
int test(){
	
	float m[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	float m2[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	transpose(m) ;
	assert(iguales(m,m2));
	
	return 0;
}	


