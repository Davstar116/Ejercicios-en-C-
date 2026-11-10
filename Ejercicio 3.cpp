#include <iostream>

using namespace std;

int main() {
    // Declaracion e inicializacion de variables
    float radio, area;
    const float pi = 3.1416;

    // Solicita y lee datos
    cout << "Calculadora del area de un circulo" << endl;
    cout << "Por favor, ingresa el radio del circulo: ";
    cin >> radio; 

    // Procesa datos
    area = pi * radio * radio;

    // Imprime resultado
    cout << "El area del circulo con radio " << radio << " es: " << area << endl;

    return 0;
}