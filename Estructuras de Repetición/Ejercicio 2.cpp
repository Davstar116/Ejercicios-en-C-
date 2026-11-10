#include <iostream>
//Elaborado por Solórzano Argueta David
//Sistema de ahorro para un videojuego

using namespace std;

int main() {
	//Declaración de variables
	float gameCost, weeklySavings, totalSavings;
	int counter;
	gameCost = 1500;
	counter = 1, totalSavings = 0;
	
	//Presentación del programa
	cout << "=== AHORRO SEMANAL ===" << endl;
	cout << " " << endl;
	
	//Ciclo que pregunta el ahorro semanal y muestra lo ahorrado hasta ese momento
	while (totalSavings < gameCost) {
		cout << "Semana " << counter << endl;
		cout << "---------" << endl;
		
		cout << "Costo del videojuego: $" << gameCost << endl;
		cout << " " << endl;
		
		cout << "Monto ahorrado: $" << totalSavings << endl;
		cout << " " << endl;
		
		cout << "Ingrese el monto ahorrado esta semana: $";
		cin >> weeklySavings;
		cout << " " << endl;
		
		totalSavings = totalSavings + weeklySavings;
		cout << "Total ahorrado: $" << totalSavings << endl;
		cout << " " << endl;
		cout << " " << endl;
		
		counter++;
	}
	
	cout << "FELICIDADES, ALCANZASTE LA META!!!" << endl;
	cout << "Semanas transcurridas: " << counter - 1 << endl;
	
	return 0;
	
}
