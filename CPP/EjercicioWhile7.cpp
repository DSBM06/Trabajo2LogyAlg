#include <iostream>

int main() {
    int longitud;
    
    // Solicitar al usuario la longitud de los vectores
    std::cout << "Ingrese la longitud de los vectores: ";
    std::cin >> longitud;
    
    // Declarar arrays para almacenar los valores ingresados por el usuario
    int vector1[longitud];
    int vector2[longitud];
    int vector_suma[longitud];
    
    // Inicializar un contador
    int i = 0;
    
    // Ingresar los elementos del primer vector
    std::cout << "Ingrese los elementos del primer vector:" << std::endl;
    while (i < longitud) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vector1[i];
        i++; // Incrementar el contador para pasar al siguiente elemento del vector
    }
    
    // Reiniciar el contador
    i = 0;
    
    // Ingresar los elementos del segundo vector
    std::cout << "Ingrese los elementos del segundo vector:" << std::endl;
    while (i < longitud) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vector2[i];
        i++; // Incrementar el contador para pasar al siguiente elemento del vector
    }
    
    // Reiniciar el contador
    i = 0;
    
    // Calcular la suma de los dos vectores
    while (i < longitud) {
        vector_suma[i] = vector1[i] + vector2[i]; // Sumar los elementos correspondientes de los vectores
        i++; // Incrementar el contador para pasar al siguiente elemento del vector
    }
    
    // Mostrar la suma de los vectores
    std::cout << "La suma de los dos vectores es:" << std::endl;
    i = 0; // Reiniciar el contador
    while (i < longitud) {
        std::cout << vector_suma[i] << " "; // Mostrar cada elemento de la suma
        i++; // Incrementar el contador para pasar al siguiente elemento del vector
    }
    
    return 0;
}