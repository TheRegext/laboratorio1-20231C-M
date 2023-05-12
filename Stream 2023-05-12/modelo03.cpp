#include <iostream>
using namespace std;
/*
Código de productor
- Número de año (1 a 5)
- Cantidad de nacimientos de cerdos
- Cantidad de nacimientos de ovejas
- Cantidad de nacimientos de vacas

**/
int main() {
   int codigoProductor, anio, cantCerdos, cantOvejas, cantVacas;
   /// PUNTO A
   int pa_cantidad;
   /// Punto B
   int pb_codigoProductor, pb_menor, pb_total;
   
   /// PUNTO C
   int pc_cantCerdos, pc_cantOvejas, pc_cantVacas, pc_total;
   
   pc_cantCerdos = pc_cantOvejas = pc_cantVacas = 0;
   
   
   
   for(int i=1; i <=10; i++){
      cout << "Ingrese codigo de productor:";
      cin >> codigoProductor;
      pa_cantidad = 0;
      
      for(int j=1; j<=5; j++){
         cout << "Ingrese anio:";
         cin >> anio;
         cout << "Ingrese cantidad de cerdos:";
         cin >> cantCerdos;
         cout << "Ingrese cantidad de ovejas:";
         cin >> cantOvejas;
         cout << "Ingrese cantidad de vacas:";
         cin >> cantVacas;
         
         /// PUNTO A
         if(cantCerdos == 0){
            pa_cantidad++;   
         }
         
         if(anio == 1){
            pb_total= cantCerdos+cantOvejas+cantVacas;
            
            if(i==1 || pb_total < pb_menor){
               pb_menor = pb_total;
               pb_codigoProductor = codigoProductor;
            }   
         }
         
         pc_cantCerdos += cantCerdos;
         pc_cantOvejas += cantOvejas;
         pc_cantVacas += cantVacas;
      }
      
      cout << "A) La cantida de anios sin cerdos son: "<<pa_cantidad<<endl;
   }
   
   cout << "B) El productor con menor produccion en el 1 anio es: " << pb_codigoProductor << endl;
   
   pc_total = pc_cantCerdos + pc_cantOvejas + pc_cantVacas;
   
   cout << "C) Porcentajes de Cerdos: " << (float)pc_cantCerdos*100/pc_total << "%"<<endl;
   cout << "C) Porcentajes de Ovejas: " << 100.0f*pc_cantOvejas/pc_total << "%"<<endl;
   cout << "C) Porcentajes de Vacas: " << 1.0f*pc_cantVacas*100/pc_total << "%"<<endl;
   
   
	
	return 0;
}

