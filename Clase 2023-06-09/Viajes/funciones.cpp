#include <iostream>
using namespace std;
#include "funciones.h"

void mostrarMayorPorVehiculo(int mViajes[][12],int cant){
    for(int i=0; i<cant;i++){
        int indiceMayor = buscarMayor(mViajes[i], 12);
        if(mViajes[i][indiceMayor]>0){
            cout << "El mayor del vehiculo #"<< i+1 << " es: " << indiceMayor+1 << endl;    
        }
    }
}

void cargarPrecios(float vPrecios[], int cant)
{
    int tipo;
    for(int i=1; i<=cant; i++)
    {
        cout << "Ingrese tipo: ";
        cin >> tipo;

        cout << "Ingrese precio";
        cin >> vPrecios[tipo-1];
    }
}

/// definicion (implementacion)
void cargarDatos(int vKilometros[], int vViajes[], float vPrecios[], int mViajes[5][12])
{
    int numeroViaje, mes, kilometros, tipo;

    ///// carga de datos
    cout << "Ingrese numero de viaje: ";
    cin >> numeroViaje;

    while(numeroViaje != 0)
    {
        cout << "Ingrese el mes: ";
        cin >> mes;
        cout << "Ingrese cantidad de kilometros: ";
        cin >> kilometros;
        cout << "Ingrese precio de tipo: ";
        cin >> tipo;

        vKilometros[mes-1] += kilometros;
        /// vViajes[mes - 1] = vViajes[mes - 1] + 1;
        /// vViajes[mes - 1] += 1;
        vViajes[mes - 1] ++;
        mViajes[tipo-1][mes-1]++;

        cout << "Precio del viaje: " << vPrecios[tipo-1] * kilometros << endl;

        cout << "Ingrese numero de viaje: ";
        cin >> numeroViaje;
    }
}

int buscarMayor(int vec[], int cant)
{
    int mayor=0;

    for(int i=1; i<cant; i++)
    {
        if(vec[i]>vec[mayor])
        {
            mayor = i;
        }
    }

    return mayor;
}

void mostrarMayores(int vec[], int cant, int mayor)
{
    for(int i=0; i<cant; i++)
    {
        if(vec[i] == mayor)
        {
            cout << "Mes: " << i+1 << endl;
        }
    }
}


void mostrarPromedios(int vKilometros[], int vViajes[], int cant)
{
    for(int i=0; i<cant; i++)
    {
        cout << "Mes "<<i+1<< ": "<< promedio(vKilometros[i],vViajes[i])<< endl;
    }
}


float promedio(float suma, float cantidad)
{
    if(cantidad==0)
    {
        return 0;
    }
    else
    {
        return suma / cantidad;
    }
}
