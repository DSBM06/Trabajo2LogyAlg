#include <iostream>

using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    // Declaración de arreglos dinámicos
    int *vector1 = new int[longitud];
    int *vector2 = new int[longitud];
    double *punto_medio = new double[longitud];

    // Lectura de elementos para el primer vector
    cout << "Ingrese los elementos del primer vector:" << endl;
    int i = 0;
    while (i < longitud) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
        i++;
    }

    // Lectura de elementos para el segundo vector
    cout << "Ingrese los elementos del segundo vector:" << endl;
    i = 0;
    while (i < longitud) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
        i++;
    }

    // Cálculo del punto medio
    i = 0;
    while (i < longitud) {
        punto_medio[i] = (vector1[i] + vector2[i]) / 2.0;
        i++;
    }

    // Muestra el punto medio
    cout << "El punto medio de los vectores es:" << endl;
    i = 0;
    while (i < longitud) {
        cout << punto_medio[i] << " ";
        i++;
    }
    cout << endl;

    // Liberar memoria de los arreglos dinámicos
    delete[] vector1;
    delete[] vector2;
    delete[] punto_medio;

    return 0;
}