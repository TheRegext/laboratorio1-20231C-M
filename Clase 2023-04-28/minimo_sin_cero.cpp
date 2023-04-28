///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>///stdlib.h

using namespace std;

///Inicialización de variables para el cálculo del máximo o mínimos depende
/// del contexto del programa.
int main(){

    int num,minimo, i;
    bool tengoMinimo=false;
    for(i=1;i<=5;i++){
        cout<<"NUMERO ";
        cin>>num;
        if(tengoMinimo==false){
            if(num>0){
                minimo=num;
                tengoMinimo=true;
            }
        }

        if(num<minimo){
                if(num>0){
                minimo=num;
                }
        }




    }
    cout<<"MINIMO "<<minimo;
	cout<<endl;
	system("pause");
	return 0;
}
