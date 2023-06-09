#include <iostream>
using namespace std;
#include "funciones.h"


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
   
