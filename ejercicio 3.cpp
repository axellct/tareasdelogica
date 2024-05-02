/*Mostrar los numeros impares de X hasta Y*/
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Ingresa el primer numero: ";
    cin >> x;
    cout << "Ingresa el segundo numero: ";
    cin >> y;

    cout << "Los numeros impares entre " << x << " y " << y << " son: ";
    if (x < y) {
        for (int i = x; i <= y; i++) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
        }
    } else {
        for (int i = y; i <= x; i++) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
        }
    }

    return 0;
}
