#include<iostream>

using namespace std;

int main() {
    int n = 100, sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i * i;
        i++;
    }
    cout << "La suma de los cuadrados de los primeros " << n << " números es: " << sum << endl;
    return 0;
}