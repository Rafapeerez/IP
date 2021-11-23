//Derivada de una funcion en un punto.
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;
double derivada( double(*func)(double),double x) {
    double h = 0.0000001; // La fórmula de la derivada utiliza la h para aproximar la derivada de ese punto, por lo que contra mas pequeña sea la h, con más exactitud sera el resultado ya que el intervalo sera mas pequeño.
    double resta= x-h, suma= x+h; // Resolvemos por separado la suma y la resta del punto con h para obtener el intervalo.
    double funcion= (func(suma)-func(resta))/(2*h); // Aplicamos la formula de f prima para aproximar la derivada.
    return funcion; // Retornamos la solucion de la derivacion.
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
double const_f(double x){return x;}
double f2(double x){return x*x+sin(x);}
double f3(double x){return x*sin(x)+x*x*log(x);}

int test(){
	assert( fabs( derivada(const_f,0)-1)<1e-3) ; 
	assert( fabs( derivada(sin,3.14159265359)-cos(3.14159265359))<1e-3) ; 
	assert( fabs( derivada(sin,3.14159265359/2)-cos(3.14159265359/2))<1e-3); 
	assert( fabs( derivada(cos,3.14159265359/2)+sin(3.14159265359/2))<1e-3); 
	assert( fabs( derivada(cos,3.14159265359/5)+sin(3.14159265359/5))<1e-3); 
	assert( fabs( derivada(f3,3)- ( 3+6*log(3)+sin(3)+3*cos(3) ) )<1e-3); 
	return 0;
}	

