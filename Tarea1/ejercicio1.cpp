/* Ejercicio1
Escribe un algoritmo que reciba una temperatura en grados Celsius y la convierta a
grados Fahrenheit. El algoritmo debe mostrar el valor final en Fahrenheit. Usa la
conversión estándar entre Celsius y Fahrenheit. Usa la conversión F = (C × 9/5) + 32.
Entrada: temperatura en grados celsius
Proceso: convertir la temperatura a grados fahrenheit
Salida: temperatura en grados fahrenheit */
#include <iostream>
using namespace std;
int main() {
   double celsius, fahrenheit;
   cout << "Ingrese la temperatura en grados Celsius: ";
   cin >> celsius;
  fahrenheit = (celsius * 9/5) + 32;
   cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << endl;
   return 0;
}
