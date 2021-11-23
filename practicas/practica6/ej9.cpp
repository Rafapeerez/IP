// Calcular la media y la desviacion tipica de los elementos de la matriz
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;
void stats(float m[4][4],float res[2]) {
    float suma=0; //Creamos la variable suma y la igualamos a 0.
    for(int i=0; i<4; i++) { //Recorremos la matriz entera
        for(int j=0; j<4; j++) {
            suma=suma+m[i][j]; //Calculamos la suma de todos los elementos de la matriz
        }
    }
    float media=suma/(4*4); //La media es igual a la suma de los elementos partido del total de elementos que componen la matriz
    res[0]=media; //Igualamos el primer elemento del vector al resultado


    float desviacion=0; //Creamos la variable de la desviacion
    for(int i=0; i<4; i++) { //Recorremos la matriz entera
        for(int j=0; j<4; j++) {
            desviacion=desviacion+pow((m[i][j]-media),2); //Vamos sumando los cuadrados de la resta de cada elemento menos la media
        }
    }
    res[1]=sqrt(desviacion/(4*4)); //Guardamos en el segundo elemento del vector el resultado final de la desviación, que es la raiz cuadrada de lo ya calculado anteriormente entre el numero de elementos de la matriz
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
	
	float m[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float st[2];
	stats(m,st);
	assert( fabs( st[0]-2.5)<1e-3  && fabs(st[1]-1.11803)<1e-3);
	return 0;
}	


