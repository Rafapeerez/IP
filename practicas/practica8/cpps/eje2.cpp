#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
#include  <cctype> //isdigit
using namespace std;

 

int main(){
    if( digitos("hola como estas")!=0){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( digitos("123")!=3){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( digitos(" hola 1 como 2 estas ")!=2){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( digitos("1holacomoestas3")!=2){
        cout<<"Error 4"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}
