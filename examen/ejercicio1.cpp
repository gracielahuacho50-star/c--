/* Graciela Huacho 
Fecha : 29 / 07/ 2026
Tema: SIstema de registro y nalisis de notas 
Una academia necesita un programa en C++ para registrar las notas finales de un grupo de estudiantes y
consultar información básica del curso. El sistema trabajará con un máximo de 20 estudiantes.
De cada estudiante se almacenará:
• primer nombre (sin espacios);
• nota final en escala de 0 a 20.
Entrada : cantidad, nombres, notas, opción del menú y nombre a buscar.
Proceso: validar, almacenar, recorrer arreglos, calcular, clasificar y buscar.
Salida: menú, reporte general, mensajes de validación y resultado de búsqueda.
*/
#include <iostream> 
# include <string> 
using namespace std;
int main () {
    int notas , opcion , buscado , cantidad ;
    int i;
    int posicion = -1;
    bool encontrado = false 
    do 
    { 
     cout << " ******** Menu ********" << endl;
     cout << " 1. Registrar estudiantes y notas "<< endl ;
     cout << " 2. Mostrar reporte general "<< endl ;
     cout << " 3. Buscar estudiante por nombre "<< endl ;
     cout << " 4. Salir " << endl ;
     cout << " seleccione una opcion "<< endl  ;
     cin >> opcion ; 
      switch (opcion)
      case = 1 :
      cout << " Ingrese la cantidad de estudiantes : "<< endl ; 
      cin >> cantidad ;

      if (cantidad > 20) {
        cout << " Cantidad invalida , intente nuevamente "<< endl ;
        }
         else {
            cout<< " Ingrese el nombre y nota del estudiante   :" << endl ;
            string 
        }

            if (notas < 0 o > 20 ){ 
            cout << " Notas inavlidas , intente nuevamente "
            }
            for( i = 0 ; i <= 20 ; i++ ) {
                cout << " Ingrese la nota  " << i + 1 << ":"  ;
                cin << notas [i] ;
                
            }
            cout << endl ;
            case = 2



            
        
    }while (opcion != 4) 
      
      
  return 0 ; 
}