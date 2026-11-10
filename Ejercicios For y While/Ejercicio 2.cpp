#include <iostream>
//Elaborado por Bruno Habid Jiménez García y Solórzano Argueta David
//Sistema para obtener cualquier tabla de multiplicar

using namespace std;

int main() {
	//Declaración de variables
	int number, product;
	
	//Presentación del programa
	cout << "=== TABLAS DE MULTIPLICAR ===" << endl;
	cout << " " << endl;
	
	//Solicita al usuario el numero de la tabla que quiere
	cout << "Que tabla de multiplicar quiere? ";
	cin >> number;
	cout << " " << endl;
	
	//Bucle que itera del 1 al 10 multiplicando cada valor por number y muestra en consola el producto
	try {
		if(number < 0){
			throw invalid_argument("El numero no puede ser negativo.");
		}
		for(int i = 1; i <= 10; i++) {
		product = i * number;
		cout << number << " x " << i << " = " << product << endl;
		}
	}
	catch (const invalid_argument& e) {
		cout << "Error: " << e.what() << endl;
	}
	
	return 0;
}
