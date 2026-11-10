#include <iostream>
//Elaborado por Solórzano Argueta David
//Sistema de préstammo de biblioteca

using namespace std;

int main() {
	//Declaracion e inicializacion de variables
	bool choice = false;
	
	//Presentación de programa
	cout << "=== SISTEMA DE PRESTAMO ===" << endl;
	cout << "Bienvenid@ al sistema de prestamos." << endl;
	cout << "" << endl;
	
	//Solicita eleccion
	cout << "Tiene multas pendientes? (Introduzca '1' si tiene multas pendientes o '0' de no ser asi.): ";
	cin >> choice;
	cout << " " << endl;
	
	//Ciclo
	//Si tiene multas no se autoriza el prestamo
	if (choice == true) {
		cout << "Lo sentimos, su prestamo no fue autorizado." << endl;
		cout << "Por favor liquide sus multas para poder solicitar prestamos." << endl;
	}
	
	//Si NO tiene multas se autoriza prestamo
	else {
		cout << "Su prestamo ha sido autorizado." << endl;
	}
	
	return 0;
}
