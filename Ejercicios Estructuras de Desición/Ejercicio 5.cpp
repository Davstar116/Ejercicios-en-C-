#include <iostream>
//Elaborado por Solórzano Argueta David
//Sistema de tienda en línea

using namespace std;

int main() {
	//Declaración de variables
	int amount, choice;
	bool membership;
	
	
	//Presentación de programa
	cout << "=== TIENDA EN LINEA ===" << endl;
	cout << " " << endl;
	
	//Solicita el monto y si tiene membresia
	cout << "Cual es el monto de la compra?: ";
	cin >> amount;
	cout << " " << endl;
	
	cout << "Tiene membresia premium? (Ingrese '1' si tiene membresia o '0' en caso de no tener.): ";
	cin >> choice;
	cout << " " << endl;
	
	//Define membership en base a choice
	if (choice == 1) {
		membership = true;
	}
	
	else {
		membership = false;
	}
	
	//Valida las dos condiciones usando un OR
	if (amount > 1000 || membership == true) {
		cout << "Felicidades, aplica envio gratis para su pedido." << endl;
	}
	
	else {
		cout << "Lo sentimos, no aplica envio gratis en su pedido." << endl;
	}
	
	return 0;
	
}
