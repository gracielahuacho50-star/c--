/* Ejercicio 5
Escribe un algoritmo que reciba un número entero de horas totales (un valor no
negativo). El algoritmo debe convertir esa cantidad de horas a semanas, días y horas
sobrantes, considerando que una semana tiene 168 horas y un día tiene 24 horas. Al
final debe mostrar cuántas semanas, cuántos días y cuántas horas sobran.
Entrada : horas totales 
Proceso: convertir las horas totales a semanas, días y horas sobrantes
Salida: semanas, días y horas sobrantes */
#include <iostream>
using namespace std;
int main() {
    int horasTotales, semanas, dias, horasSobrantes;
    cout << "Ingrese el numero de horas totales: ";
    cin >> horasTotales;
    semanas = horasTotales / 168;
    dias = (horasTotales % 168) / 24;
    horasSobrantes = (horasTotales % 168) % 24;
    cout << "Semanas: " << semanas << endl;
    cout << "Dias: " << dias << endl;
    cout << "Horas sobrantes: " << horasSobrantes << endl;
    if (horasTotales < 0) {
        cout << "Error: El numero de horas totales no puede ser negativo." << endl;
    }
    return 0;
}