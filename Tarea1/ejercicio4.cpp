/* Ejercicio 4
Escribe un algoritmo que reciba tres calificaciones: Parcial 1, Parcial 2 y Proyecto.
Con esos valores, debe calcular la nota final usando ponderaciones: el Parcial 1 vale
el 30%, el Parcial 2 vale el 30% y el Proyecto vale el 40%. El algoritmo debe mostrar la
nota final.
Entrada : parcial 1, parcial 2, proyeecto 
Proceso :Calcular la nota final usando ponderaciones 
Salida: nota final  */
#include <iostream>
using namespace std;
int main() {
    double parcial1, parcial2, proyecto, notaFinal;
    cout << "Ingrese la calificacion del Parcial 1: ";
    cin >> parcial1;
    cout << "Ingrese la calificacion del Parcial 2: ";
    cin >> parcial2;
    cout << "Ingrese la calificacion del Proyecto: ";
    cin >> proyecto;
    notaFinal = (parcial1 * 0.3) + (parcial2 * 0.3) + (proyecto * 0.4);
    cout << "La nota final es: " << notaFinal << endl;
    return 0;
}