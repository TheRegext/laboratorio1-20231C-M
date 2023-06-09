#include <iostream>
using namespace std;

/*
Una empresa de viajes dispone de todos viajes registrados del año pasado.
Por cada viaje se ingresará:
    •	Numero de Viaje
    •	Mes del Viaje
    •	Kilómetros recorridos
    •	Precio del viaje
El fin de la carga de datos se indica con un numero de viaje igual a cero. Se pide calcular y mostrar:
A)	Los meses que hayan realizado la mayor cantidad de kilómetros recorrido.
B)	Por cada viaje, el precio por kilómetro. 
C)	Por cada mes, el promedio de kilómetros por viajes. (suma de todos / cantidad)
*/
/// declaracion de las funciones (prototipo)
void cargarDatos(int [], int []);
int buscarMayor(int [], int);
void mostrarMayores(int [], int, int);
void mostrarPromedios(int [], int [], int);
float promedio(float, float);


int main(){
    int vKilometros[12]{}, indiceMayor, vViajes[12]{};
    
    cargarDatos(vKilometros, vViajes);
    
    /// busco mayor
    indiceMayor = buscarMayor(vKilometros, 12);
    
    /// mostrar los meses que sean iguales al mayor
    mostrarMayores(vKilometros, 12, vKilometros[indiceMayor]);
    
    mostrarPromedios(vKilometros, vViajes, 12);
    

    return 0;
}

/// definicion (implementacion)
void cargarDatos(int vKilometros[], int vViajes[]){
    int numeroViaje, mes, kilometros;
    float precio;
    
    ///// carga de datos
    cout << "Ingrese numero de viaje: ";
    cin >> numeroViaje;
    
    while(numeroViaje != 0){
        cout << "Ingrese el mes: ";
        cin >> mes;
        cout << "Ingrese cantidad de kilometros: ";
        cin >> kilometros;
        cout << "Ingrese precio de viaje: ";
        cin >> precio;
        
        vKilometros[mes-1] += kilometros;
        /// vViajes[mes - 1] = vViajes[mes - 1] + 1;
        /// vViajes[mes - 1] += 1;
        vViajes[mes - 1] ++; 
        
        cout << "Precio por kilometro: " << (precio / kilometros) << endl;
        
        cout << "Ingrese numero de viaje: ";
        cin >> numeroViaje;
    }
}

int buscarMayor(int vec[], int cant){
    int mayor=0;
    
    for(int i=1; i<cant; i++){
        if(vec[i]>vec[mayor]){
            mayor = i;
        }
    }
    
    return mayor;
}

void mostrarMayores(int vec[], int cant, int mayor){
    for(int i=0; i<cant; i++){
        if(vec[i] == mayor){
            cout << "Mes: " << i+1 << endl;
        }
    }
}


void mostrarPromedios(int vKilometros[], int vViajes[], int cant){
    for(int i=0; i<cant; i++){
        cout << "Mes "<<i+1<< ": "<< promedio(vKilometros[i],vViajes[i])<< endl;
    }
}


float promedio(float suma, float cantidad){
    if(cantidad==0){
        return 0;
    }
    else{
        return suma / cantidad;    
    }
}























