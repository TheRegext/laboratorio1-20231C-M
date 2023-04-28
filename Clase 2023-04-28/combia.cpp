///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, j;
    int centro,grupo,proyectos, tipo;
    float inversion;
    ///punto a
    float minInv;
    int minGrupo;

    ///punto b
    int total3=0;
    ///punto c
    int suma1, suma2, suma3;
    suma1=suma2=suma3=0;

    for(i=1;i<=30;i++){
        ///30
        for(j=1;j<=20;j++){
            ///600-> por cada vuelta del for externo tengo 20 del interno 30*20
            ///acá va el ingreso de datos
            cin>>centro;
            cin>>grupo;
            cin>>proyectos;
            cin>>tipo;
            cin>>inversion;
            ///punto a
            if(j==1){
                minInv=inversion;
                minGrupo=grupo;
            }
            if(inversion<minInv){
                minInv=inversion;
                minGrupo=grupo;
            }
            ///punto b
            if(tipo==3){
                total3+=proyectos;
            }
            ///punto c
            switch(tipo){
                case 1: suma1+=proyectos;
                        break;
                case 2: suma2+=proyectos;
                        break;
                case 3: suma3+=proyectos;
                        break;
                }
        }
        ///acá se informa el punto a.
        cout<<"PARA EL CENTRO "<<centro<<" EL GRUPO CON INVERSION MENOR ES "<<minGrupo<<endl;
    }
    ///acá se informa el punto b
    cout<<"CANTIDAD DE PROYECTOS DE TIPO 3 "<<total3<<endl;
    ///acá se informa el punto c
    int totalProyectos;
    totalProyectos=suma1+suma2+suma3;
    ///falta terminar el cálculo
	cout<<endl;
	system("pause");
	return 0;
}
