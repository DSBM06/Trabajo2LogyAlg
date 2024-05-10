#include <iostream>

using namespace std;

int main() {
    float suma = 0;
    float promedio;
    float nota;
    int contador = 1;

    while (contador <= 10) {
        cout << "Ingrese la nota del estudiante " << contador << ": ";
        cin >> nota;
        suma += nota;
        contador++;
    }

    promedio = suma / 10;

    cout << "El promedio general de la sección es: " << promedio << endl;

    return 0;
}