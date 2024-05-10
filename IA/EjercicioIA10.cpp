#include <iostream>
using namespace std;

int main() {
    int n, m, i, j;
    int matriz[10][10], transpuesta[10][10];

    cout << "Ingrese el numero de filas y columnas de la matriz (separados por espacio): ";
    cin >> n >> m;

    cout << "Ingrese los elementos de la matriz:" << endl;
    i = 0;
    while (i < n) {
        j = 0;
        while (j < m) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            j++;
        }
        i++;
    }

    i = 0;
    while (i < n) {
        j = 0;
        while (j < m) {
            transpuesta[j][i] = matriz[i][j];
            j++;
        }
        i++;
    }

    cout << "La matriz transpuesta es:" << endl;
    i = 0;
    while (i < m) {
        j = 0;
        while (j < n) {
            cout << transpuesta[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}