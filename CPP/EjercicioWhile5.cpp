#include <iostream>

using namespace std;

int main() {
    // Definición de variables
    const int estudiantes = 8;
    int contadorAprobados = 0;
    int contadorReprobados = 0;
    int sumaNotas = 0;
    float promedio;
    const int notaMinima = 70;
    int i = 1; // Inicialización de la variable de control del bucle
    
    // Bucle while para ingresar las notas de los estudiantes
    while (i <= estudiantes) {
        int nota;
        
        // Solicitar al usuario la nota del estudiante
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        
        // Sumar la nota a la suma total de notas
        sumaNotas += nota;
        
        // Verificar si el estudiante aprobó o reprobó
        if (nota >= notaMinima) {
            contadorAprobados++;
        } else {
            contadorReprobados++;
        }
        
        // Incrementar el contador de iteración
        i++;
    }
    
    // Calcular el promedio del grupo
    promedio = sumaNotas / static_cast<float>(estudiantes);
    
    // Mostrar los resultados
    cout << "Cantidad de alumnos aprobados: " << contadorAprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << contadorReprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;
    
    return 0;
}