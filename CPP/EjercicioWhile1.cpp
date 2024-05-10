#include <iostream>

using namespace std;

int main() 
{
    int n;
    cout << "Ingrese un número natural n: ";
    cin >> n;

    int suma = 0;
    int i = 1;

    // Suma de los números naturales desde 1 hasta n utilizando un bucle while
    while (i <= n) {
        suma += i;
        i++;
    }

    cout << "La suma de los números naturales desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}