#include<iostream>

using namespace std;

int main() {
    int n, sum = 0, i = 1;
    cout << "Ingrese un numero natural: ";
    cin >> n;
    while(i <= n) {
        sum = sum + i;
        i = i + 1;
    }
    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << sum << endl;
    return 0;
}