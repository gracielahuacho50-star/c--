/*Ejercicio 1 */
#include <iostream>
using namespace std;
int main () {
    int edades[8];
    int i;
    int buscado;
    int posicion = -1 ;
    bool encontrado = false ;
    for ( i = 0 ; i < 8 ; i++) {
        cout << "Ingrese la edad " << i + 1 << ":";
        cin >> edades[i] ;
    }
    cout <<  endl ;
    cout << " Ingrese la edad que desea buscar : ";
    cin >> buscado ;
    for (i = 0 ; i < 8 ; i++) {
       if ( edades[i] == buscado && encontrado == false ){
        encontrado = true ;
        posicion = i ;
       }

    }
       cout << endl ;

       if (encontrado== true ){
        cout<< "edad encontrada en la posicion :" << posicion << endl ;
    
       }
       else{
        cout << " edad no encontrada en el arreglo " << endl ;
       }



return 0 ;
}

