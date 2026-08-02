/* Graciela Huacho 
Mini Proyecto 

*/
#include <iostream> 
#include <string> 
using namespace std;
void registrarCancion(string titulo[], string artista[], double duracion[], int &cantidad);
void mostrarCanciones(string titulo[], string artista[], double duracion[], int cantidad);
void buscarCancion(string titulo[], string artista[], double duracion[], int cantidad);
void reporteGeneral(string titulo[], double duracion[], int cantidad);
void duracionTotalYCancionExtensa(string titulo[], double duracion[], int cantidad);

int main () {
    string titulo [20] ;
    string artista [20] ;
    double duracion [20] ;
    int opcion ;
    int cantidad = 0 ;
    string buscado ;
    bool encontrado = false ; 
    int posicion = -1 ;
    float totalDuracion = 0 ;
    int mayor = 0 ; 

    do 
    { 
     cout << " ******** Gestion de canciones  ********" << endl;
     cout << " 1. Registrar canciones "<< endl ;
     cout << " 2. Mostrar canciones  "<< endl ;
     cout << " 3. Buscar canciones"<< endl ;
     cout << " 4. Reporte general " << endl ;
     cout << " 5. Duración total de la lista y canción más extensa. "<< endl  ;
     cout << " 6. Salir "<< endl  ;
     cout << " Selecciones una opcion "<< endl  ;
     cin >> opcion ; 
    switch (opcion) {
            case 1:
                registrarCancion(titulo, artista, duracion, cantidad);
                break;
            case 2:
                mostrarCanciones(titulo, artista, duracion, cantidad);
                break;
            case 3:
                buscarCancion(titulo, artista, duracion, cantidad);
                break;
            case 4:
                reporteGeneral(titulo, duracion, cantidad);
                break;
            case 5:
                duracionTotalYCancionExtensa(titulo, duracion, cantidad);
                break;
            case 6:
                 cout << "Saliendo del programa...";
                 break;
            
            default:
                cout << "Error: opcion invalida" << endl;
        }
    } while (opcion != 6);

    void registrarCancion(string titulo[], string artista[], float duracion[], int& cantidad) 
    {
    if (cantidad >= 20) {
        cout << "Cantidad invalida , intente nuevamente." << endl;
        return;
      }
      cout << "Ingrese el titulo de la cancion: ";
      cin >> titulo[cantidad];

      cout << "Ingrese el artista: ";
      cin >> artista[cantidad];

      cout << "Ingrese la duracion: ";
      cin >> duracion[cantidad];
      cantidad ++ ;
    }
    void mostrarCanciones(string titulo[], string artista[], double duracion[], int cantidad)
    {
       if (cantidad == 0)
    {
        cout << "No hay canciones registradas." << endl;
        return;
    }

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Cancion " << i + 1 << endl;
        cout << "Titulo: " << titulo[i] << endl;
        cout << "Artista: " << artista[i] << endl;
        cout << "Duracion: " << duracion[i] << endl;
        cout << endl;
    }
      } 
     void buscarCancion(string titulo[], string artista[], double duracion[], int cantidad)
     {
      string buscado;
      bool encontrado = false;
      cout << "Ingrese el titulo de la cancion que desea buscar: ";
    cin >> buscado;

    for (int i = 0; i < cantidad; i++)
    {
        if (titulo[i] == buscado)
        {
            cout << "Cancion encontrada." << endl;
            cout << "Titulo: " << titulo[i] << endl;
            cout << "Artista: " << artista[i] << endl;
            cout << "Duracion: " << duracion[i] << endl;

            encontrado = true;
        }
    }

    if (encontrado == false)
    {
        cout << "La cancion no existe." << endl;
    }
     }
    void reporteGeneral(string titulo[], double duracion[], int cantidad){
       for(int i = 0; i < cantidad; i++)
    {
        cout << "Cancion " << i + 1 << endl;
        cout << "Titulo: " << titulo[i] << endl;
        cout << "Artista: " << artista[i] << endl;
        cout << "Duracion: " << duracion[i] << endl;
        cout << "------------------------" << endl;
    }
}
    

    return 0;
}