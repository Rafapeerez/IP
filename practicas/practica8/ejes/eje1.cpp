#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;
int espacios(string cad){
int total=0, x=cad.size();
for(int cont=0;cont<x ;cont++){
if (cad[cont]==32){
total++;
}
}
return total;
}
int main(){
    if( espacios("hola como estas")!=2){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( espacios("hola como estas ")!=3){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( espacios(" hola como estas ")!=4){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( espacios("holacomoestas")!=0){
        cout<<"Error 4"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;
}

