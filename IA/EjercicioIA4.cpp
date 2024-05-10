#include<iostream>

using namespace std;

int main() {
    int notas[10];
    char nombre[20];
    int i, n;
    float suma, promedio;

    i = 0;
    suma = 0;

    while (i < 10) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin >> nombre;

        cout << "Ingrese la nota de " << nombre << ": ";
        cin >> notas[i];

        suma += notas[i];

        i++;
    }

    promedio = suma / 10;

    cout << "El promedio general de la seccion es: " << promedio << endl;

    return 0;
}