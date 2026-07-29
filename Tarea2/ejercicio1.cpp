
/*Ejercicio1 */
#include <iostream>
using namespace std;
int main () {
    int N , contador ;
    cout << "Ingrese un numero entero positivo: ";
    cin >> N ;
    if (N <= 0) {
        cout << "El numero ingresado debe ser mayor de 0 " << endl;
    } else {
        contador = 1 ;
        while (contador <= N) {
            cout << contador << endl ;
            contador = contador +1 ;
        }
    }
return 0 ;
}