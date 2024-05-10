#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    
    // Solicitar al usuario el número de filas de la matriz
    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;
    
    // Solicitar al usuario el número de columnas de la matriz
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;
    
    // Declarar la matriz original y la matriz transpuesta
    int matriz[filas][columnas];
    int matriz_transpuesta[columnas][filas];
    
    // Solicitar al usuario ingresar los elementos de la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    int i = 0, j = 0;
    while (i < filas) {  // Bucle while para recorrer las filas
        j = 0;
        while (j < columnas) {  // Bucle while para recorrer las columnas
            cout << "Ingrese el elemento en la posición " << i+1 << "," << j+1 << ": ";
            cin >> matriz[i][j];
            j++;  // Incrementar j para pasar a la siguiente columna
        }
        i++;  // Incrementar i para pasar a la siguiente fila
    }
    
    // Imprimir la matriz original
    cout << "Matriz original:" << endl;
    i = 0;
    while (i < filas) {  // Bucle while para recorrer las filas
        j = 0;
        while (j < columnas) {  // Bucle while para recorrer las columnas
            cout << matriz[i][j] << " ";
            j++;  // Incrementar j para pasar a la siguiente columna
        }
        cout << endl;
        i++;  // Incrementar i para pasar a la siguiente fila
    }
    
    // Calcular la matriz transpuesta
    i = 0;
    while (i < filas) {  // Bucle while para recorrer las filas
        j = 0;
        while (j < columnas) {  // Bucle while para recorrer las columnas
            matriz_transpuesta[j][i] = matriz[i][j];
            j++;  // Incrementar j para pasar a la siguiente columna
        }
        i++;  // Incrementar i para pasar a la siguiente fila
    }
    
    // Imprimir la matriz transpuesta
    cout << "Matriz transpuesta:" << endl;
    i = 0;
    while (i < columnas) {  // Bucle while para recorrer las filas de la matriz transpuesta
        j = 0;
        while (j < filas) {  // Bucle while para recorrer las columnas de la matriz transpuesta
            cout << matriz_transpuesta[i][j] << " ";
            j++;  // Incrementar j para pasar a la siguiente columna
        }
        cout << endl;
        i++;  // Incrementar i para pasar a la siguiente fila
    }
    
    return 0;
}