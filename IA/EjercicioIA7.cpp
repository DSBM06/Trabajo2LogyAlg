#include <iostream>
using namespace std;

int main() {
    int n, i, num1, num2, sum;
    int vec1[100], vec2[100], vec3[100];

    cout << "Ingrese el tamanio de los vectores (maximo 100): ";
    cin >> n;

    cout << "Ingrese los elementos del primer vector:" << endl;
    i = 0;
    while (i < n) {
        cout << "Vec1[" << i << "]: ";
        cin >> num1;
        vec1[i] = num1;
        i++;
    }

    cout << "Ingrese los elementos del segundo vector:" << endl;
    i = 0;
    while (i < n) {
        cout << "Vec2[" << i << "]: ";
        cin >> num2;
        vec2[i] = num2;
        i++;
    }

    i = 0;
    while (i < n) {
        sum = vec1[i] + vec2[i];
        vec3[i] = sum;
        i++;
    }

    cout << "La suma de los vectores es: ";
    i = 0;
    while (i < n) {
        cout << vec3[i] << " ";
        i++;
    }
    cout << endl;

    return 0;
}