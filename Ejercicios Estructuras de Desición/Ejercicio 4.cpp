#include <iostream>
//Elaborado por Solórzano Argueta David
//Sistema de cofres

using namespace std;

int main() {
	//Declaración de variables
	int level, choice;
	bool key;
	
	//Presentación del programa
	cout << "=== SISTEMA DE COFRES ===" << endl;
	cout << " " << endl;
	
	//Solicita datos
	cout << "Cual es su nivel?: ";
	cin >> level;
	cout << " " << endl;
	
	cout << "Tiene la llave magica? (Ingrese '1' si la tiene o '0' sino.): ";
	cin >> choice;
	cout << " " << endl;
	
	//Define key en base a choice
	if (choice == 1) {
		key = true;
	}
	
	else {
		key = false;
	}
	
	//Valida las dos condiciones usando AND
	if (level >= 10 && key == true) {
		cout << "Cofre desbloqueado." << endl;
	}
	else {
		cout << "Aun no puedes abrir el cofre." << endl;
	}
	
	return 0;
	
}
