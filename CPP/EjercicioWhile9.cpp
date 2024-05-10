#include <iostream>
using namespace std;

int main() {
    int matriz1[10][10], matriz2[10][10], resultado[10][10];
    int filas_matriz1, columnas_matriz1, filas_matriz2, columnas_matriz2;

    // Solicitar al usuario ingresar las dimensiones de las matrices
    cout << "Ingrese el número de filas de la primera matriz: ";
    cin >> filas_matriz1;
    cout << "Ingrese el número de columnas de la primera matriz: ";
    cin >> columnas_matriz1;
    cout << "Ingrese el número de filas de la segunda matriz: ";
    cin >> filas_matriz2;
    cout << "Ingrese el número de columnas de la segunda matriz: ";
    cin >> columnas_matriz2;

    // Solicitar al usuario ingresar los elementos de las matrices
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    int i = 0, j = 0;
    while (i < filas_matriz1) {
        j = 0;
        while (j < columnas_matriz1) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
            j++;
        }
        i++;
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    i = 0;
    while (i < filas_matriz2) {
        j = 0;
        while (j < columnas_matriz2) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
            j++;
        }
        i++;
    }

    // Realizar la multiplicación de matrices
    i = 0;
    while (i < filas_matriz1) {
        j = 0;
        while (j < columnas_matriz2) {
            resultado[i][j] = 0;
            int k = 0;
            while (k < columnas_matriz1) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }

    // Mostrar el resultado
    cout << "El resultado de la multiplicación de matrices es:" << endl;
    i = 0;
    while (i < filas_matriz1) {
        j = 0;
        while (j < columnas_matriz2) {
            cout << resultado[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}