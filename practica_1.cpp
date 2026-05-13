#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int num1, num2, num3;
    int mayor, menor;

    // Presentación y entrada de datos
    cout << "=== COMPARADOR DE 3 NÚMEROS ===" << endl;
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    cout << "Ingresa el tercer número: ";
    cin >> num3;

    // --- Lógica para determinar el MAYOR ---
    if (num1 >= num2 && num1 >= num3) {
        mayor = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        mayor = num2;
    } else {
        mayor = num3;
    }

    // --- Lógica para determinar el MENOR ---
    if (num1 <= num2 && num1 <= num3) {
        menor = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        menor = num2;
    } else {
        menor = num3;
    }

    // --- Salida de resultados ---
    cout << "\n RESULTADOS:" << endl;
    cout << "Número mayor: " << mayor << endl;
    cout << "Número menor: " << menor << endl;

    // Caso especial: todos iguales
    if (num1 == num2 && num2 == num3) {
        cout << "¡Los tres números son iguales!" << endl;
    }

    return 0;
}