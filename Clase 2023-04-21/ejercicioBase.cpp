///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
	int i, edad, eMax=0;
	for(i=1;i<=10;i++){
		cout<<"INGRESE LA EDAD: ";
		cin>>edad;
		if(edad>eMax) eMax=edad;
	}
	cout<<"EDAD MAXIMA: "<<eMax<<endl;
	return 0;
}
