/*Ejercicio 4
*/

#include <iostream>
using namespace std;
int main ()  
{
    int opcion , numero  , doble , triple ;
    do {
        cout << " ******* Menu *******  " << endl ;
        cout << " 1. Doble de un numero " << endl ;
        cout << " 2. Triple de un numero " << endl ;
        cout << " 3. Salir " << endl ;
        cout <<   "seleccione una opcion : "<< endl ;
        cin >> opcion ;
        
        if ( opcion == 1 ){ 
            cout << " Ingrese un numero : " ;
            cin >> numero ;
            doble = numero *2 ;
            cout << " El doble de " << numero  << " es : " << doble << endl ;
        } 
        else if ( opcion == 2 ) {
                cout << " Ingrese un numero : " ;
                cin >> numero ;
                triple = numero *3 ;
                cout << " El triple de " << numero  << " es : " << triple << endl ;
        }  

        else if ( opcion ==3 ) {
                cout << " Saliendo del programa ...." << endl ;
        }    
        else 
        {
                cout << " opcion invalida, por favor seleccione una opcion valida " << endl ;
        }

    } while (opcion != 3 ) ;   
    return 0 ;
}