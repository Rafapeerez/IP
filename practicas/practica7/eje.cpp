//Base de datos de alumnos
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

struct Alumno { //Creamos la estructura que se compone de 3 variables
    int dni=0;
    int edad=0;
    float nota=0;
    void matricular() { //Creamos la funcion dentro de la estructura ya que utilizaremos las mismas variables para la funcion.Esta funcion lo que hace es pedir los datos del alumno.
        cout<<"Introduce el DNI del nuevo alumno: "<<endl;
        cin>>dni;
        cout<<"Introduce la edad del alumno: "<<endl;
        cin>>edad;
        cout<<"Introduce la nota del alumno: "<<endl;
        cin>>nota;
        cout<<" "<<endl;
    }
    void imprime() { //La funcion imprime, imprime por pantalla los datos de un alumno.
        cout<<"Los datos del alumno buscado son: "<<endl;
        cout<<"DNI: "<<dni<<"  Edad: "<<edad<<"  Nota: "<<nota<<endl;
        cout<<" "<<endl;
    }
    void modificar() { //La funcion modificar lo que hace es modificar los datos de un alumno menos el DNI ya que es especifico de cada alumno, en caso de error al introducirlo habria que eliminar los datos del alumno y crearlo de nuevo.
        cout<<"Introduzca los datos del alumno de nuevo. El DNI no se podra modficar:"<<endl;
        cout<<"Introduce la edad del alumno: "<<endl;
        cin>>edad;
        cout<<"Introduce la nota del alumno: "<<endl;
        cin>>nota;
        cout<<" "<<endl;
    }
    void eliminar() {
        dni=0;
        edad=0;
        nota=0;
    }
};
void menu() { //La funcion menu imprime por pantalla todas las opciones del menu
    cout<<"Seleccione una opcion del menu."<<endl;
    cout<<"1. Adjuntar alumnos."<<endl;
    cout<<"2. Imprimir datos alumno."<<endl;
    cout<<"3. Imprimir datos de todos los alumnos."<<endl;
    cout<<"4. Modificar alumno."<<endl;
    cout<<"5. Eliminar a un alumno."<<endl;
    cout<<"6. Salir."<<endl;
    cout<<"Opcion: ";
}

int buscar(Alumno a[], int na, int dni) { //La funcion buscar busca el alumno por el dni
    for(int cont=0; cont<na; cont++) {
        if(a[cont].dni==dni) { //Si el dni insertado es igual al apartado del vector dedicado para guardar el dni de cualquier alumno
            return cont; //entonces se devuelve el numero del alumno en el que se encuentra el dni introduciido
        }
    }
    return -1; //Si no se devuelve -1
}

int main() {
    Alumno alumnos[10];// Se acrea vector con basura
    int na=0;// Indica cuantos elementos se estan usando del vector
    int opcion=0;// Variable para controlar el menu de usuario
    do {
        menu(); //LLamamos a la funcion menu para que imprima por pantalla todas las opciones.
        cin>>opcion; //Introducimos la opcion
        cout<<" "<<endl;

        switch(opcion) { //Dependiendo de la opcion que escojamos nos llevará a distintos apartados con funciones diferentes
        case 1 : {
            if (na==10) { //Si el numero de alumnos es igual al total permitidos se imprime por pantalla el aviso siguiente
                cout<<"No es posible insertar mas alumnos."<<endl;
                cout<<" "<<endl;
            }
            else { //Si no, quiere decir que todavía hay sitio en el vector para seguir introduciendo alumnos por lo que se llamara a la funcion para meter los datos de otro alumno.
                alumnos[na].matricular();
                na++;
            }
        }
        break;

        case 2 : {
            cout<<"Inserte el DNI del alumno que desee encontrar: ";
            int dni;
            cin>>dni; //En la segunda opcion del menu pedimos que se introduzca un dni
            int indice=buscar(alumnos, na, dni); //Creamos una variable que se iguala a la funcion buscar, donde se guardara el numero del alumno donde se ha encontrado el dni insertado o -1 en el caso de que no se encuentre el numero insertado
            if(indice==-1) { //Si el indice es -1 significa que no esta el dni introducido
                cout<<"No se encuentra ningun alumno para el DNI introducido. "<<endl;
                cout<<" "<<endl;
            }
            else { //Si no, imprimimos los datos del alumno del que hemos insertado el dni
                alumnos[indice].imprime();
                cout<<" "<<endl;
            }
        }
        break;

        case 3 : {
            for(int cont=0; cont<10; cont++) {
                alumnos[cont].imprime(); //Imprimos todos los datos de todos los alumnos
            }
            cout<<" "<<endl;
        }
        break;

        case 4 : {
            cout<<"Inserte el DNI del alumno que desee encontrar: ";
            int dni;
            cin>>dni;//En la cuarta opcion del menu pedimos que se introduzca un dni
            int indice=buscar(alumnos, na, dni);
            if(indice==-1) {
                cout<<"No se encuentra ningun alumno para el DNI introducido. "<<endl;
                cout<<" "<<endl;
            }
            else { //Si el indice es diferente a -1 se ha encontrado el dni, por lo que modificamos los datos del alumno encontrado
                alumnos[indice].modificar();
                cout<<" "<<endl;
            }
        }
        break;

        case 5 : {
            cout<<"Inserte el DNI del alumno que desee encontrar: ";
            int dni;
            cin>>dni;
            int indice=buscar(alumnos, na, dni);
            int ultimo=na-1; //Creamos una variable que se igual al numero del ultimo alumno.
            if(indice==-1) {
                cout<<"No se encuentra ningun alumno para el DNI introducido. "<<endl;
                cout<<" "<<endl;
            }
            else {
                cout<<"El alumno ha sido eliminado. "<<endl;
                alumnos[indice].eliminar(); //Eliminamos los datos del alumno que se haya insertado su dni
                alumnos[indice]=alumnos[ultimo]; //Cambiamos el ultimo alumno a la posicion del alumno eliminado
                alumnos[ultimo].eliminar(); //Eliminamos los datos del ultimo alumno,dejando así espacion para insertar otro alumno.
                na--;
                cout<<" "<<endl;
            }
        }
        break;
        };
    }
    while(opcion!=6);

    system("pause");
}

