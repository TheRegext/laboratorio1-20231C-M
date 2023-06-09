#include <iostream>
using namespace std;
#include "funciones.h"


int main(){
    
    int vKilometros[12]{}, indiceMayor, vViajes[12]{};
    float vPrecios[5];
    int mViajes[5][12]{};
    
    cargarPrecios(vPrecios, 5);
    
    cargarDatos(vKilometros, vViajes, vPrecios, mViajes);
    
    /// busco mayor
    indiceMayor = buscarMayor(vKilometros, 12);
    
    /// mostrar los meses que sean iguales al mayor
    mostrarMayores(vKilometros, 12, vKilometros[indiceMayor]);
    
    mostrarPromedios(vKilometros, vViajes, 12);
    
    mostrarMayorPorVehiculo(mViajes, 5);
    

    return 0;
}
