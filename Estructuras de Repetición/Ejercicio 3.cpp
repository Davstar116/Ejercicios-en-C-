#include <iostream>
//Elaborado por Solórzano Argueta David
//Sistema de cajero automático

using namespace std;

int main() {
	//Declaración de variables
	int option;
	float balance, enteredAmount, withdrawnAmount;
	balance = 3000;
	
	//Bucle para repetir menú hasta salir
	do {
		//Presentación del programa
		cout << "=== CAJERO AUTOMATICO ===" << endl;
		cout << " " << endl;
		
		cout << "1. Consultar saldo." << endl;
		cout << "2. Depositar dinero." << endl;
		cout << "3. Retirar dinero." << endl;
		cout << "4. Salir." << endl;
		cout << " " << endl;
		
		cout << "Seleccione una opcion (1-4): ";
		cin >> option;
		cout << " " << endl;
		cout << " " << endl;
		
		switch (option) {
			case 1:
				cout << "--- Consulta de saldo ---" << endl;
				cout << " " << endl;
				cout << "El saldo actual es de: $" << balance << endl;
				cout << " " << endl;
			break;
			
			case 2:
				cout << "--- Deposito de dinero ---" << endl;
				cout << " " << endl;
				cout << "Ingrese el monto a depositar: $";
				cin >> enteredAmount;
				cout << " " << endl;
				
				balance = balance + enteredAmount;
				cout << "El nuevo saldo es de: $" << balance << endl;
				cout << " " << endl;
			break;
			
			case 3:
				cout << "--- Retiro de dinero ---" << endl;
				cout << " " << endl;
				cout << "Ingrese el monto a retirar: $";
				cin >> withdrawnAmount;
				cout << " " << endl;
				
				balance = balance - withdrawnAmount;
				cout << "El saldo restante es de: $" << balance << endl;
				cout << " " << endl;
			break;
			
			default:
				cout << " " << endl;
			break;
		}
	} while (option != 4);
	
	return 0;
	
}
