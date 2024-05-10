#include <iostream>

int main() { 
    // Empezamos con el número impar más grande menor o igual a 100
    int i = 99;

    // Imprimir números impares en orden descendente entre 1 y 100 con un bucle while
    while (i >= 1) {
        std::cout << i << std::endl;
        // Restamos 2 para obtener el siguiente número impar
        i -= 2; 
    }
    
    return 0;
}