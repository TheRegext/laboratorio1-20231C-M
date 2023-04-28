///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

/// +   -   *   /   %

int main(){
    /*int resto, valor;

    valor=11/2;
    cout<<"RESULTADO DE DIVIDIR 11/2"<<"     "<<valor<<endl;
    system("pause");
    resto=11%2;
    cout<<"RESULTADO DE 11%2 "<<resto;*/
    int edad1, edad2, edad3;
    float promedio;
    const int DIVISOR=3;

    cout<<"INGRESE UNA EDAD: ";
    cin>>edad1;

    cout<<"INGRESE UNA EDAD: ";
    cin>>edad2;

    cout<<"INGRESE UNA EDAD: ";
    cin>>edad3;
    DIVISOR++;
    promedio=(float)(edad1+edad2+edad3)/DIVISOR;
    cout<<"EL PROMEDIO DE EDAD ES: "<<promedio;
	cout<<endl;
	system("pause");
	return 0;
}
