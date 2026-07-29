/* Ejercicio 2 
*/
#include <iostream>
using namespace std;    
int main () {
    int suma , numero , i ;
    suma = 0 ; 
    for (i=1; i <= 5; i++) 
    {
        cout << "Ingrese un numero : "<< i << ":" ;
        cin >> numero ;
        suma = suma + numero ;
         }
        cout << "La suma total es: " << suma << endl ;
        
    
    return 0 ;
}