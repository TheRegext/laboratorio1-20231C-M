///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
	int cantCeros=0, n=0, suma=0;
	char letra='a';
	bool seguir=false;
	while(letra){
		cout<<"INGRESE UN NUMERO: ";
		cin>>n;
		suma+=n;
		if(n==0){
            cantCeros++;
            if(cantCeros==2){
                seguir=false;
            }
		}
		letra++;
    }
	cout<<"SUMA: "<<suma<<endl;
	return 0;
}
