#include <iostream>
//Elaborado por Bruno Habid Jiménez García y Solórzano Argueta David
//Sistema de recuperación de vida

using namespace std;

int main() {
	//Declaración de variables
	int health;
	
	//Presentación del programa
	cout << "=== REGENERACIÓN DE SALUD ===" << endl;
	cout << " " << endl;
	
	//Solicita al usuario la vida actual del personaje
	cout << "Ingrese la vida actual del personaje: ";
	cin >> health;
	cout << " " << endl;
	
	//Bucle que va aumentando vida de 2 en 2
	try {
		if(health < 100) {
			throw invalid_argument("La salud no puede ser negativa");
		}
		while (health < 100) {
		cout << health << endl;
		health = health + 2;
		}
	
		cout << " " << endl;
		cout << " " << endl;
		cout << health << endl;
		cout << "Salud restaurada por completo." << endl;
		cout << " " << endl;
	}
	catch(const invalid_argument& e) {
		cout << "Error: " << e.what() << endl;
	}
	
	return 0;
	
}
