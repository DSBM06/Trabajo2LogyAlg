#include <iostream>
using namespace std;

int main() {
    int num = 100, suma = 0;

    while (num <= 200) {
        if (num % 2 == 0) {
            suma += num;
        }
        num++;
    }

    cout << "La suma de los números pares entre 100 y 200 es: " << suma << endl;

    return 0;
}