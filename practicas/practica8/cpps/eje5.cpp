#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

 

int main(){
    if( replace("HOLA COMO ESTAS",'A','a')!="HOLa COMO ESTaS"){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }

    if( replace("HOLA COMO ESTAS",'x','x')!="HOLA COMO ESTAS"){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( replace("HOLA COMO EsTAS",'s','S')!="HOLA COMO ESTAS"){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}

