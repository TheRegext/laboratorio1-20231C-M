///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
	int i, edad, eMax=0;
    cout<<"INGRESE LA EDAD: ";
    cin>>edad;
	while(edad!=0){

        while(edad>=0){
            if(edad>eMax) eMax=edad;
            cout<<"INGRESE LA EDAD: ";
            cin>>edad;

        }
        cout<<"EDAD MAXIMA: "<<eMax<<endl;
        eMax=0;
        cout<<"INGRESE LA EDAD: ";
        cin>>edad;
    }
    return 0;
}
