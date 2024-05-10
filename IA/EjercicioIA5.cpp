#include <iostream>
using namespace std;

int main() {
    int notas[8], i, aprobados = 0, reprobados = 0, suma = 0;
    float promedio;

    i = 0;
    while (i < 8) {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];

        suma += notas[i];

        if (notas[i] >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }

        i++;
    }

    promedio = suma / 8.0;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}