#include <iostream>

using namespace std;

int main() {
    // Inicializamos la variable para almacenar la suma
    int suma = 0;

    // Inicializamos la variable para iterar sobre los números
    int numero = 100;

    // Mientras el número sea menor o igual a 200
    while (numero <= 200) {
        // Verificamos si el número es par
        if (numero % 2 == 0) {
            // Si es par, lo sumamos a la variable suma
            suma += numero;
        }
        // Incrementamos el número en 1 para pasar al siguiente
        numero++;
    }

    // Imprimimos el resultado de la suma
    cout << "La suma de los números pares entre 100 y 200 es: " << suma << endl;

    return 0;
}