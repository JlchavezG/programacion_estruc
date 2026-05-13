#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "=== CLASIFICADOR DE TRIÁNGULOS ===" << endl;
    cout << "Ingresa la longitud del lado A: "; cin >> a;
    cout << "Ingresa la longitud del lado B: "; cin >> b;
    cout << "Ingresa la longitud del lado C: "; cin >> c;

    // 1. Validación básica de entrada
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << " Error: Las medidas deben ser mayores a cero." << endl;
        return 0;
    }

    // 2. Desigualdad triangular (¿forma un triángulo?)
    if (a + b > c && a + c > b && b + c > a) {
        cout << " Sí es un triángulo válido." << endl;

        // 3. Clasificación
        if (a == b && b == c) {
            cout << " Tipo: EQUILÁTERO (3 lados iguales)" << endl;
        } else if (a == b || a == c || b == c) {
            cout << " Tipo: ISÓSCELES (2 lados iguales)" << endl;
        } else {
            cout << " Tipo: ESCALENO (3 lados diferentes)" << endl;
        }
    } else {
        cout << " No cumple la desigualdad triangular. No es un triángulo." << endl;
    }

    return 0;
}