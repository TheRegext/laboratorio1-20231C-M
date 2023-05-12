#include <iostream>
using namespace std;
/**
Sucursal (número entero)
- Mes (1 a 4)
- Tipo de calzado ('Z' - Zapatos, 'X' - Zapatillas, 'P' - Pantuflas, 'O' - Ojotas)
- Número de talle (entero)
- Importe (float)

*/
int main() {
      int numeroSucursal, mes, numeroTalle;
      float importe;
      char tipoCalzado;
      
      /// PUNTO A
      int pa_cantidad;
      float pa_sumaImporte;
      
      /// Punto B
      int pb_cantidad;
      bool pb_vendioZapatos, pb_vendioPantuflas;
      
      pb_cantidad = 0;
      
      /// Punto C
      float pc_zapatos, pc_zapatillas, pc_pantuflas, pc_ojotas;
      
      pc_zapatos = pc_zapatillas = pc_pantuflas = pc_ojotas = 0;
      
      /// Punto D
      bool pd_vendioZapatos, pd_vendioZapatillas, pd_vendioPantuflas, pd_vendioOjotas;
      
      pd_vendioZapatos = pd_vendioZapatillas = pd_vendioPantuflas = pd_vendioOjotas = false;
      
      
      for(int i=1; i<=10;i++){ // C++98
         cout << "Ingrese numero de sucursal: ";
         cin >> numeroSucursal;
         
         pa_cantidad = 0;
         pa_sumaImporte = 0;
         
         pb_vendioPantuflas = false;
         pb_vendioZapatos = false;
         
         while(numeroSucursal != 0){
            cout << "Ingrese mes: ";
            cin >> mes;
            
            cout << "Ingrese tipo de calzado: ";
            cin >> tipoCalzado;
            
            cout << "Ingrese numero de talle: ";
            cin >> numeroTalle;
            
            cout << "Ingrese importe: ";
            cin >> importe;
            
            /// Punto A
            if(numeroTalle == 40){
               pa_cantidad++; // contar
               pa_sumaImporte += importe; // acumular
            }
            
            ///Punto B
            if(tipoCalzado == 'Z'){
               pb_vendioZapatos= true;
            }
            else if(tipoCalzado == 'P'){
               pb_vendioPantuflas = true;
            }
            
            /// Punto C
            switch(tipoCalzado){
            case 'Z':
               pc_zapatos += importe;
               break;
            case 'X':
               pc_zapatillas+=importe;
               break;
            case 'P':
               pc_pantuflas+=importe;
               break;
            case 'O':
               pc_ojotas+= importe;
               break;
            }
            
            /// PUNTO D
            if(numeroSucursal == 50){
               switch(tipoCalzado){
               case 'Z':
                  pd_vendioZapatos = true;
                  break;
               case 'X':
                  pd_vendioZapatillas = true;
                  break;
               case 'P':
                  pd_vendioPantuflas = true;
                  break;
               case 'O':
                  pd_vendioOjotas = true;
                  break;
               }
            }
            
            cout << "Ingrese numero de sucursal: ";
            cin >> numeroSucursal;
         }
         
         if(pa_cantidad>0){
            cout << "A) El promedio es: " << (pa_sumaImporte / pa_cantidad) << endl;
         }
         
         /// Punto B
         if(pb_vendioZapatos && !pb_vendioPantuflas){
            pb_cantidad++;   
         }
         
      }
      /*
      float mayor = pc_zapatos;
      string mayorLetra = "Zapatos"
      
      if(pc_zapatillas > mayor){
         mayor = pc_zapatillas;
         mayorLetra = "Zapatillas";
      }
      
      if(pc_pantuflas>mayor){
         mayor = pc_pantuflas;
         mayorLetra = "Pantuflas";
      }
      
      if(pc_ojotas > mayor){
         mayor = pc_ojotas;
         mayorLetra = "Ojotas";
      }
      
      cout << "C) El mayor es " << mayorLetra << endl;
           */
     
      
      /// PUNTO B
      cout << "B) La cantida de sucursales son: " << pb_cantidad << endl;
      
      if(pc_zapatos > pc_zapatillas && pc_zapatos > pc_pantuflas && pc_zapatos > pc_ojotas){
         cout << "C) El mayor es Zapatos" << endl;
      }
      else if(pc_zapatillas > pc_pantuflas && pc_zapatillas > pc_ojotas){
         cout << "C) El mayor es Zapatillas" << endl;
      }
      else if(pc_pantuflas > pc_ojotas){
         cout << "C) El mayor es Pantuflas" << endl;
      }
      else{
         cout << "C) El mayor es Ojotas" << endl;
      }
      
      cout << "D) La sucursal 50 vendio: " <<endl;
      
      if(pd_vendioZapatos){
         cout << "Zapatos" << endl;
      }
      if(pd_vendioZapatillas){
         cout << "Zapatillas" << endl;
      }
      if(pd_vendioPantuflas){
         cout << "Pantuflas" << endl;
      }
      if(pd_vendioOjotas){
         cout << "Ojotas" << endl;
      }
	
	return 0;
}

