#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Funci�n que genera una contrase�a
string generarContrasena(int longitud) {
    string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    string contrasena = "";

    for (int i = 0; i < longitud; i++) {
        int indice = rand() % caracteres.length();
        contrasena += caracteres[indice];
    }

    return contrasena;
}

int main() {
    srand(time(0)); // Semilla para n�meros aleatorios

    int longitud;
    cout << "Ingrese la longitud de la contrasena (m�nimo 8): ";
    cin >> longitud;

    if (longitud < 8) {
        cout << "La contrase�a debe tener al menos 8 caracteres." << endl;
        return 0;
    }

    string contrasena = generarContrasena(longitud);
    cout << "Contrase�a generada: " << contrasena << endl;

    return 0;
}
