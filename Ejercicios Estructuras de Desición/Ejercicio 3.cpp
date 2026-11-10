#include <iostream>
//Elaborado por Solórzano Argueta David
//Sistema de alerta metereológica

using namespace std;

int main() {
	//Declaración de variables
	int speed;
	
	//Presentación del programa
	cout << "=== SISTEMA DE ALERTA METERIOLOGICO ===" << endl;
	cout << " " << endl;
	
	//Solicita dato
	cout << "Ingrese la velocidad del viento (km/h): ";
	cin >> speed;
	cout << " " << endl;
	
	//Procesa el dato
	if (speed > 80) {
		cout << "ALERTA: Vientos fuertes!!" << endl;
	}
	
	return 0;
	
} 
