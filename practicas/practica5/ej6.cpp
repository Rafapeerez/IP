//El programa indica si dos vectores son iguales o no.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
bool soniguales(float v1[], float v2[], int n) { //Creamos la funcion
    bool solu; //La solucion se recoge en una variable booleana ya que va a ser o verdadero falso
    for(int cont=0; cont<n; cont++) {
        if(v1[cont]==v2[cont]) { //Si el elemento del vector que indica el contador es igual en ambos vectores ya definidos
            solu=true; //La solucion sera verdadera.
        }
        else { // Si no es falsa
            solu=false;
            return solu;
        }
    }
    return solu;
}

//// 
int test();
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

int test(){
	int errors=0;


	//test 1(all positive)
	float vec[6]={1,2,30,4,5,6};
	float vec2[6]={1,2,30,4,5,6};
	float vec3[6]={1,2,30,4,5,7};
	float vec4[6]={1,2,-1,4,5,6};
	float vec5[6]={1,1,1,1,1,1};

	if(  soniguales(vec,vec2,6)==false ) errors++;
	if(  soniguales(vec,vec3,6)==true ) errors++;
	if(  soniguales(vec,vec4,6)==true ) errors++;
	if(  soniguales(vec5,vec5,6)==false ) errors++;

	return errors;
}	


