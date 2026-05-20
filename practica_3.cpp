#include <iostream>
#include <string>

using namespace std;

int main() {
    //  VARIABLES CONSTANTES (no cambian durante la ejecución)
    const string USUARIO_CORRECTO = "sistemas";
    const string CONTRASENA_CORRECTA = "1234";
    const int MAX_INTENTOS = 3;

    //  CONTADOR (se usa implícitamente en el bucle for)
    for (int intento = 1; intento <= MAX_INTENTOS; ++intento) {
        string usuario, contrasena;

        cout << "\n--- Intento " << intento << " de " << MAX_INTENTOS << " ---\n";
        cout << "Ingrese usuario: ";
        cin >> usuario;
        cout << "Ingrese contraseña: ";
        cin >> contrasena;

        //  ESTRUCTURA if / else
        if (usuario == USUARIO_CORRECTO && contrasena == CONTRASENA_CORRECTA) {
            cout << "\n Acceso concedido. ¡Bienvenido, " << usuario << "!\n";
            return 0; // Sale del programa exitosamente
        } else {
            if (intento < MAX_INTENTOS) {
                cout << " Credenciales incorrectas. Intente de nuevo.\n";
            } else {
                // Tercer intento fallido
                cout << "\n No es usuario válido. Ha agotado sus intentos.\n";
                cout << "Cerrando programa...\n";
                return 1; // Sale del programa con código de error (1)
            }
        }
    }

    return 0;
}