//Dice si el elemento val esta en el vector v[],que esta ordenado en forma ascendente.
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std;
bool find_in_sorted_vector(int val,int v[],int n) {
    bool resultado=false; //Empieza con el resultado en falso
    int i=0, f=n-1, c;
    while(resultado==false && i<=f) { //Si el resultado sigue falso e i es menor igual que f
        c=(i+f)/2; //Se crea una variable que su valor sera la mitad de la suma de los extremos del vector
        if(v[c]==val) { //si el vector es igual al valor el resultado sera correcto
            resultado=true;
        }
        else if (v[c]<val) { //si el vector no es igual al valor la posicion de i se situa una por delante de i
            i=c+1;
        }
        else { //si no, f se coloca uno por detras de c.
            f=c-1;
        }
    }
    return resultado;
}
////
int test();
int main() {
    test();
    cout<<"Correcto "<<endl;
    system("pause");
}

   
int test(){
 	//llama a la funcion para el valor 10 
	cout<<"test 1"<<endl;

 	int v[10]={2,3,4,5,6,7,8,9,10,11};//crea el vector
	assert (find_in_sorted_vector(2,v,10)==true);
	assert (find_in_sorted_vector(223,v,10)==false);
 	cout<<"test 2"<<endl;
	int v2[2]={2,3};//crea el vector
	assert (find_in_sorted_vector(2,v2,10)==true) ;
	assert (find_in_sorted_vector(223,v2,10)==false) ;
 	cout<<"test 3"<<endl;
 	 
	int v3[10]={-3,-2,4,5,6,7,8,9,10,11};//crea el vector
	assert (find_in_sorted_vector(-2,v3,10)==true) ;
 
	assert (find_in_sorted_vector(-3,v3,10)==true) ;
	assert (find_in_sorted_vector(4,v3,10)==true) ;
	assert (find_in_sorted_vector(5,v3,10)==true) ;
	assert (find_in_sorted_vector(6,v3,10)==true) ;
	assert (find_in_sorted_vector(7,v3,10)==true) ;
	assert (find_in_sorted_vector(8,v3,10)==true) ;
	assert (find_in_sorted_vector(9,v3,10)==true) ;
	assert (find_in_sorted_vector(10,v3,10)==true) ;
	assert (find_in_sorted_vector(11,v3,10)==true) ;
 	assert (find_in_sorted_vector(121,v3,10)==false) ;

	cout<<"test 4"<<endl;
	int v4[11]={-3,-2,4,5,6,7,8,9,10,11,12};//crea el vector
	assert (find_in_sorted_vector(-2,v4,11)==true) ;
	assert (find_in_sorted_vector(-3,v4,11)==true) ;
	assert (find_in_sorted_vector(4,v4,11)==true) ;
	assert (find_in_sorted_vector(5,v4,11)==true) ;
	assert (find_in_sorted_vector(6,v4,11)==true) ;
	assert (find_in_sorted_vector(7,v4,11)==true) ;
	assert (find_in_sorted_vector(8,v4,11)==true) ;
	assert (find_in_sorted_vector(9,v4,11)==true) ;
	assert (find_in_sorted_vector(10,v4,11)==true) ;
	assert (find_in_sorted_vector(11,v4,11)==true) ;
	assert (find_in_sorted_vector(12,v4,11)==true) ;
 			
 return 0;
}	


