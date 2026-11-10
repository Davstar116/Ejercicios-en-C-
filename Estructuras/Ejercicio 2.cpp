#include <iostream>
//Elaborado por Solórzano Argueta David
//Sistema de salud de un jugador

using namespace std;

int main() {
	//Declaración de variables
	int health;
	
	//Presentación del programa
	cout << "=== SISTEMA DE VIDA ===" << endl;
	cout << " " << endl;
	
	//Solicita la vida del jugador
	cout << "Ingrese la vida del jugador (0-100): ";
	cin >> health;
	cout << " " << endl;
	
	//Procesa la salud y la valida en los tres niveles
	if (health >= 70) {
		cout << "Salud Alta." << endl;
	}
	else if (health >= 30 && health < 69) {
		cout << "Salud Media." << endl;
	}
	else {
		cout << "Salud Baja." << endl;
	}
	
	return 0;
	
}
