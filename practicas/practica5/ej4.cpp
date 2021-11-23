//Devuelve el valor maximo de un vector.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

float max(float vec[], int n) { //Creamos la funcion 
    int a;
    a=vec[0]; //Igualamos la variable al primer elemento del vector.
    for(int cont=0; cont<n; cont++) {
        if(vec[cont]>a) { //Si el elemento del vector que indica el contador es mayor al ya asignado, la variable a tomará su valor
            a=vec[cont]; // Quedando en a el mayor de los elementos del vector
        }
    }
    return a;
}

//// 
int test();//indica que la funcion test esta mas abajo
int main(){ 
		int nerrors=test();
		if (nerrors==0){
			cout<<"Correcto "<<endl;
		}
		else{
			cout<<"Hay "<<nerrors<<" errores en el test"<<endl;
		}
		system("pause");

}
//funcion de test
int test(){
	int errors=0;


	//test 1(all positive)
	float vec[6]={1,2,30,4,5,6};
	if(  max(vec,6)!=30 ) errors++;

	//test 2(all negative)
	float vec2[6]={-1,-2,-30,-4,-5,-6};
	if(  max(vec2,6)!=-1 ) errors++;

	//test 3 bigger
	float vec3[11]={-1,-2,-30,-4,-5,-6,1,2,5,6,10};
	if(  max(vec3,11)!=10 ) errors++;

	return errors;
}	


