#include <iostream>
using namespace std;
#include "funciones.h"

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
               
