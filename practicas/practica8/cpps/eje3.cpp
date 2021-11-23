#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
#include  <cctype> //isdigit
using namespace std;

 
int main(){
    string cad="hola como estas";
    convierte_a_mayuscula(cad);
    if( cad!="HOLA COMO ESTAS"){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }

    cad="HOLA";
    convierte_a_mayuscula(cad);
    if( cad!="HOLA"){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
 

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}


