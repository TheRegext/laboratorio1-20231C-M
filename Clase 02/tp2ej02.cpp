#include <iostream> // incluye la biblioteca de entrada (teclado) y salida(patalla)
using namespace std; // utilice la funcionalidad estandar de c++

/*
    Datos entrada
        primerNumero, segundoNumero
        
    Datos de salida
        "Es multiplo"   => (R == 0)
        "No es multiplo" => (R != 0)
        
    operaciones:
        R = primerNumero % segundoNumero
*/

int main(){
    // declaracion
    int primeroNumero, segundoNumero, resto;
    
    // pedimos datos
    cout << "Ingrese primer numero: ";
    cin >> primeroNumero;
    
    cout << "Ingrese segundo numero: ";
    cin >> segundoNumero;  
   
    // proceso
    
    if(segundoNumero != 0){
        resto = primeroNumero % segundoNumero;
        
        // salida
        
        if(resto == 0){
            cout << "Es multiplo." << endl;
        }
        else{
            cout << "No es multiplo"<< endl;
        }     
    }
    else{
        cout << "No dividas por cero... gil." << endl;
        
    }
    
   
    
    
    
    return 0;
}
