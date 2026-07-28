/*Ejercicio3 
Escribe un algoritmo que reciba la edad de una persona y determine el precio a pagar
según estas reglas: si la edad es 18 o más, el precio es 5 dólares; si la edad es menor
a 18, el precio es 2.50 dólares. El algoritmo debe mostrar el precio final.
Entrada : edad de la persona 
Proceso: determinar el precio a pagar segun las condiciones 
Salida: precio final  */
#include <iostream>
using namespace std;    
int main () {
    int edad; double precio ; 
    cout << "Ingrese su edad : ";
    cin >> edad;
    if (edad >= 18) {
        precio = 5;
    } else {
        precio = 2.50;
    }
    cout << "El precio a pagar es: $" << precio << endl;
    return 0;
}