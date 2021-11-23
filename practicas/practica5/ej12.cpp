//Retorna el numero de veces que aparece el valor val en el vector v.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int find(int val, int v[],int n) { //Creamos la funcion  
    int resultado=0;
    for(int cont=0; cont<n; cont++) {
        if(v[cont]==val) { //Si el elemento del vector que indica el contador es igual al valor que buscamos...
            resultado=resultado+1; // se le suma 1 al resultado de veces que se encuentra este valor en el vector
        }
    }
    return resultado;
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
	//llama a la funcion para el valor 10 
	int v1[10]={1,2,2,3,1,2,2,3,4,5};//crea el vector
	if ( find(1,v1,10)!=2) errors++;
	if ( find(10,v1,10)!=0) errors++;
	if ( find(2,v1,10)!=4) errors++;
	if ( find(-1,v1,10)!=0) errors++;
	 
 return errors;
}	


