#include <iostream>

int main() {
    //Empezamos estableciendo los valores tanto de suma como i
    int suma = 0;
    int i = 1;

    //Establecemos que se van a ir sumando los cuadrados de cada numero hasta llegar a 100
    while (i <= 100) {
        suma += i * i;
        i++;
    }

    //Indicamos que se muestre el resultado de la suma de los cuadrados
    std::cout << "La suma de los cuadrados de los números entre 1 y 100 es: " << suma << std::endl;

    return 0;
}