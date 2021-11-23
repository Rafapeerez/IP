#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

 
int main(){
    if( vocales("HOLA COMO ESTAS")!=6){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }

    if( vocales("hola como Estas")!=6){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }

    if( vocales("xbnmsmnbx  nssmn")!=0){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}
