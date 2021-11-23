//Integral definida de una funcion
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;
double integral( double(*func)(double),double init,double end) { // Segun la regla de los trapecios, se aproxima a una integral utilizando n trapecios.Con la suma del area de estos n trapecios se obtiene la integral definida.
    int n=40; // Determinamos el numero de trapecios.Le asignamos un valor alto para mayor precision ya que contra mas trapecios en el intervalo [a,b], menor sera el error cometido.
    double a=init,b=end; // Creamos una variable con los parametros que definen la integral que vamos a calcular
    double h= ((b-a)/n); // Igualamos h, incuida en la formula, a esa operacion.
    double sumatorio=0; // Igualamos a 0 la variable suma que recogera el resultado del sumatorio de aposteriori
    for(int k=1; k<n; k++) { // Creamos el operador de un sumatorio con el bucle for, que empieza desde 1 hasta que llega a una constante que es menor que el numero de trapecios
        sumatorio= sumatorio+(2*func(a+(k*h)));	
    }
    double suma=func(a)+sumatorio+func(b); // Creamos la variable suma donde le añadimos al sumatorio anterior func(a y b) ya que solo se incluyen 1 vez en el bucle.
    double solucion= (h/2)*(suma); // El resultado final
    return solucion;
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

int test(){
	assert(fabs( integral(const_f,0,1)-0.5)<1e-2); 
	assert(fabs( integral(sin,0,1)-0.459656)<1e-2); 
	assert(fabs( integral(cos,0,1)-0.841394)<1e-2); 
	assert(fabs( integral(exp,0,2)-6.3891)<1e-2); 
	assert(fabs( integral(log,1,2)-0.38629)<1e-2);    
	return 0;
}	


