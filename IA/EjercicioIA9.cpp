#include <iostream>
using namespace std;

int main() {
    int matriz1[10][10], matriz2[10][10], transpuesta[10][10], R1, C1, R2, C2, i, j;

    cout << "Ingrese el numero de filas y columnas de la primera matriz (separados por espacio): ";
    cin >> R1 >> C1;

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    i = 0;
    while (i < R1) {
        j = 0;
        while (j < C1) {
            cin >> matriz1[i][j];
            j++;
        }
        i++;
    }

    cout << "Ingrese el numero de filas y columnas de la segunda matriz (separados por espacio): ";
    cin >> R2 >> C2;

    if (C1 != R2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicacion." << endl;
    } else {
        cout << "Ingrese los elementos de la segunda matriz:" << endl;
        i = 0;
        while (i < R2) {
            j = 0;
            while (j < C2) {
                cin >> matriz2[i][j];
                j++;
            }
            i++;
        }

        for (i = 0; i < R1; i++) {
            for (j = 0; j < C2; j++) {
                transpuesta[i][j] = 0;
                for (int k = 0; k < C1; k++) {
                    transpuesta[i][j] += matriz1[i][k] * matriz2[k][j];
                }
            }
        }

        cout << "La matriz resultante de la multiplicacion es:" << endl;
        for (i = 0; i < R1; i++) {
            for (j = 0; j < C2; j++) {
                cout << transpuesta[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}