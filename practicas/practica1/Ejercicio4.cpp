//El programa asocia un numero del 1 al 7 a un dia.
#include <iostream>
using namespace std;
int main(){
   int dia;
   cout<<"Introduzca un numero del 1 al 7 y pulse Intro:"<<endl;
   cin>>dia;
   if (dia==1){ // Si el numero es 1, es el lunes.
                cout<<"Es lunes."<<endl;
   }
    else if (dia==2){ //Si es 2, es martes...etc
                cout<<"Es martes."<<endl;
}
    else if (dia==3) {
                cout<<"Es miercoles."<<endl;
}
    else if (dia==4) {
               cout<<"Es jueves."<<endl;
} 
    else if (dia==5) {
               cout<<"Es viernes."<<endl;
}
    else if (dia==6) {
               cout<<"Es sabado."<<endl;
}
    else if (dia==7) {
               cout<<"Es domingo."<<endl;
}
   else{ //Si no es un numero del 1 al 7, no te dice ningun dia.
          cout<<"Dia erroneo."<<endl;
}
cin.ignore();
cin.get();
}

