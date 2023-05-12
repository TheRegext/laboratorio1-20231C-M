#include <iostream>
using namespace std;
/*
Código de producto
- Tipo ('F' - Fruta o 'V' - Verdura)
- Cantidad de toneladas exportadas
- Importe recaudado
*/
int main() {
  int codigo, cantidadToneladas;
  float recaudacion;
  char tipo;
  
  /// Punto A
  float pa_menor;
  int pa_codigoProducto;
  bool pa_esPrimero = true;
  
 
  /// Punto B
  int pb_cantidad;
  pb_cantidad = 0;
  
  /// Punto C
  int pc_toneladasFrutas, pc_toneladasVerduras;
  pc_toneladasFrutas = pc_toneladasVerduras = 0;
  
  cout << "Ingrese codigo de Prodructo: ";
  cin >> codigo;
  
  while(codigo != 0){
     cout << "Ingrese Tipo: ";
     cin >> tipo;
     
     cout << "Ingrese cantidad de toneladas: ";
     cin >> cantidadToneladas;
     
     cout << "Ingrese recaudacion: ";
     cin >> recaudacion;
     
     if(tipo == 'F'){
        if(pa_esPrimero || recaudacion < pa_menor){
           pa_esPrimero = false;
           pa_menor = recaudacion;
           pa_codigoProducto = codigo;
        }   
     }
     
     /// Punto B
     
     if(recaudacion/cantidadToneladas/1000 < 100){
        pb_cantidad++;   
     }
     
     
     /// Punto C
     if(tipo == 'F'){
        pc_toneladasFrutas+=cantidadToneladas;
     }
     else{
        pc_toneladasVerduras+=cantidadToneladas;
     }
     
     
     
     cout << "Ingrese codigo de Prodructo: ";
     cin >> codigo;
  }
  
  if(pa_esPrimero == false){
     cout << "A) El producto menor es: " << pa_codigoProducto << endl;   
  }
  
  
  cout << "B) La cantida fue: " << pb_cantidad << endl;
  
  if(pc_toneladasFrutas>pc_toneladasVerduras){
     cout << "C) La mayor cantida de toneladas fueron de Frutas" << endl;
  }
  else if(pc_toneladasFrutas<pc_toneladasVerduras){
     cout << "C) La mayor cantida de toneladas fueron de Verduras" << endl;
  }
  else{
     cout << "C) Ambas tuvieron la misma cantida de toneladas." << endl;
  }
   
	
	return 0;
}

