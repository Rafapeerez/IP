//Determina las posiciones en que el valor val aparece en el vector v y las guarda en el vector indices.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int find_indices(int val,int v[],int n,int indices[]) { //Creamos la funcion
    int numero=0;
    for(int cont=0; cont<n; cont++) {
        if(v[cont]==val) { //Si el elemento del vector que indica el contador es igual valor que queremos buscar...
            indices[numero]=cont; //Se guarda en el vector indices 
            numero++;
        }
    }
    return numero;
}
//// 
int test();
int main(){ 
		int nerrors=test();
		if (nerrors==0){
			cout<<"Correcto "<<endl;
		}
		else{
			cout<<"Hay "<<nerrors<<" errores en el test"<<endl;
		}
		system("pause");
}

int test(){
	int errors=0;
	//llama a la funcion para el valor 10 
	int v1[10]={1,2,2,3,1,2,2,3,4,5};//crea el vector
	int indices[10];
	//reset indices
	for(int i=0;i<10;i++) indices[i]=-1;//-1 means invalid 

	int value,nt;

	////// test para 1
	value=1;	
	nt=find_indices(value,v1,10,indices);
	if (nt>10) {cout<<"too many indices found"<<endl; errors++; return errors;}//do not continue cause we could go out of bounds
	for(int i=0;i<nt;i++){
		if ( indices[i] <0 || indices[i]>=10) {//invalid index
			cout<<"invalid index "<<indices[i]<<endl;
			errors++;
		}
		else{ //correct index, check if the value expected is in
			if (v1[ indices[i] ]!=value){
				cerr<<"value in indices["<<i<<"] is not "<<value<<endl;
				errors++;
			}
		}
	}
		
		////// test para 2
	value=2;	
	nt=find_indices(value,v1,10,indices);
	if (nt>10) {cout<<"too many indices found"<<endl; errors++; return errors;}//do not continue cause we could go out of bounds
	for(int i=0;i<nt;i++){
		if ( indices[i] <0 || indices[i]>=10) {//invalid index
			cout<<"invalid index "<<indices[i]<<endl;
			errors++;
		}
		else{ //correct index, check if the value expected is in
			if (v1[ indices[i] ]!=value){
				cerr<<"value in indices["<<i<<"] is not "<<value<<endl;
				errors++;
			}
		}
	}
		
		////// test para valor que no esta
	value=2222;	
	nt=find_indices(value,v1,10,indices);
	if (nt>10) {cout<<"too many indices found"<<endl; errors++; return errors;}//do not continue cause we could go out of bounds
	for(int i=0;i<nt;i++){
		if ( indices[i] <0 || indices[i]>=10) {//invalid index
			cout<<"invalid index "<<indices[i]<<endl;
			errors++;
		}
		else{ //correct index, check if the value expected is in
			if (v1[ indices[i] ]!=value){
				cerr<<"value in indices["<<i<<"] is not "<<value<<endl;
				errors++;
			}
		}
	}
				
		
 return errors;
}	


