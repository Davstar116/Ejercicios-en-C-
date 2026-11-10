#include <iostream>
//Elaborado por Solórzano Argueta David
//Sistema para verificar acceso a un laboratorio

using namespace std;

int main() {
	//Declara e inicializa variables
	int code, entryCode;
	code = 4589;
	
	//Presentación del programa
	cout << "=== ACCESO AL LABORATORIO ===" << endl;
	cout << " " << endl;
	
	//Solicita clave
	cout << "Introduzca la clave de acceso: ";
	cin >> entryCode;
	cout << " " << endl;
	
	//Verifica la clave
	if (entryCode == code) {
		cout << "Acceso concedido." << endl;
		cout << "Que tenga buen dia." << endl;
	}
	
	else {
		cout << "Acceso denegado." << endl;
		cout << "Por favor intente de nuevo." << endl;
	}
	
	return 0;
	
}
