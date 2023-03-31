#include <iostream> // incluye la biblioteca de entrada (teclado) y salida(patalla)
using namespace std; // utilice la funcionalidad estandar de c++

// linea de comentario

/*
    Se ingresa por teclado 2 numeros, mostrar la diferencia entre ambos.
*/

/*
    Datos de entrada
        PrimerNumero, SegundoNumero
        
    Datos de salida
        Diferencia
    
    Operacion:
        Diferencia = PrimerNumero - SeugundoNumero
*/

/*
    int para enteros, o sea valores sin decimales (1,5,6,9,-20)
    float para reales, o sea valores con decimales (1.2, 3.5, 3.0)
    string para alfanumericos, o sea para textos ("hola")
    char para caracteres, ('A', '1', '>')
    bool para valores de verdad, verdadero (true) o falso(false)
*/

/// Programa principal 
int main(){
    /*
        PascalCase -- clases
        camelCase -- variables
        snake_case -- variables
        UPPERCASE -- Constantes
        lowercase
    */
    
    
    // declarar las variables
    float primerNumero;
    float segundoNumero;
    float diferencia;
   
    // datos de entradas
    cout << "Ingrese primer numero: ";
    cin >> primerNumero;
    
    cout << "Ingrese segundo numero: ";
    cin >> segundoNumero;
    
    // proceso
    diferencia = primerNumero - segundoNumero;
    
    /*
        M *= 2; M = M * 2;
    */
    
    if(diferencia < 0){
        diferencia *= -1; 
    }
    
    // datos de salida 
    cout << "La diferencia es: " << diferencia << endl;
    
    return 0;
}
