#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int numero1, numero2;
    
    //Presentacion de progrma
    cout << "--- Operaciones Aritmeticas ---" << endl;
    
    // Solicita datos
    cout << "Ingresa el primer numero entero: ";
    cin >> numero1;
    
    cout << "Ingresa el segundo numero entero: ";
    cin >> numero2;

    // Procesa datos e imprime resultado
    cout << "\nResultados:" << endl;
    cout << "Suma: " << numero1 + numero2 << endl;
    cout << "Resta: " << numero1 - numero2 << endl;
    cout << "Multiplicacion: " << numero1 * numero2 << endl;
    
    // Agregamos una pequeña validación para la división
    if (numero2 != 0) {
        cout << "Division: " << numero1 / numero2 << endl;
    } else {
        cout << "Division: No se puede dividir entre cero." << endl;
    }

    return 0;
}