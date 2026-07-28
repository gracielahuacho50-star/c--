/*Ejercicio2
Escribe un algoritmo que reciba la base y la altura de un rectángulo. Con esos datos,
debe calcular y mostrar el área y el perímetro del rectángulo.
Entrada: base y altura de un rectangulo 
Proceso : Calcular y perimetro del rectangulo 
Salida: area y perimetro del rectangulo  */
#include <iostream>
using namespace std;
int main() {
    double base, altura, area, perimetro;
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;
    area = base * altura;
    perimetro = 2 * (base + altura);
    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo5 es: " << perimetro << endl;
    return 0;
}
