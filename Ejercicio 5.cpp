#include <iostream>

using namespace std;

int main() {
    // Declaracion de variables
    int saludInicial, cantidadPociones, saludPorPocion, saludTotal;

    cout << "--- Calculadora de Salud del Personaje ---" << endl;

    // Solicita datos
    cout << "Ingresa la salud inicial del personaje: ";
    cin >> saludInicial;

    cout << "Ingresa la cantidad de pociones de salud que recogio: ";
    cin >> cantidadPociones;

    cout << "Ingresa cuanta salud recupera cada pocion: ";
    cin >> saludPorPocion;

    // Procesa datos
    saludTotal = saludInicial + (cantidadPociones * saludPorPocion);

    // Imprime resultddo
    cout << "\nDespues de tomar las pociones, la salud total del personaje es: " << saludTotal << endl;

    return 0;
}