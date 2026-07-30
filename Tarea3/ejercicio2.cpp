/* Ejercicio 2*/
#include <iostream> 
using namespace std ;
int main (){
    int cantidades [6] ;
    int i ;
    int buscado ;
    int posicion = -1 ;
    bool encontrado = false;

    for (i=0; i<6; i++ )
    {
      cout << "Ingrese la cantidad : " << i + 1 << ": " << endl ;  
      cin >> cantidades [i] ;
    }
    cout<< endl ;
    cout << " Ingrese la cantidad que desea buscar : ";
    cin >> buscado ;
    for (i = 0 ; i < 8 ; i++) {
       if ( cantidades[i] == buscado && encontrado == false ){
        encontrado = true ;
        posicion = i ;
       }

    }
       cout << endl ;

       if (encontrado== true ){
        cout<< "cantidad encontrada en la posicion :" << posicion << endl ;
    
       }
       else{
        cout << " cantidad no encontrada en el arreglo " << endl ;
       }



return 0 ;
}
