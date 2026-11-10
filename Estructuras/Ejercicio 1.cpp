#include <iostream>
//Elaborado por Solórzano Argueta David
//Ejercicio 1: Calculadora Básica

using namespace std;

int main() {
	//Declaración de variables
	float num1, num2, sum, diff, prod, quot;
	int option;
	
	//Presentación del programa
	cout << "=== CALCULADORA BASICA ===" << endl;
	cout << " " << endl;
	cout << "Nota: El orden de los factores es num1, (+,-,*,/), num2." << endl;
	cout << " " << endl;
	
	//Solicita los dos números
	cout << "Ingrese el primer numero a operar: ";
	cin >> num1;
	cout << " " << endl;
	
	cout << "Ingrese el segundo numero a operar: ";
	cin >> num2;
	cout << " " << endl;
	
	//Procesa los numeros, realiza las cuatro operaciones aritmeticas
	sum = num1 + num2;
	diff = num1 - num2;
	prod = num1 * num2;
	quot =  num1 / num2;
	
	//Impresión del menú
	cout << "Operaciones algebraicas:" << endl;
	cout << "------------------------" << endl;
	cout << "1. Suma" << endl;
	cout << "2. Resta" << endl;
	cout << "3. Multiplicacion" << endl;
	cout << "4. Division" << endl;
	cout << "5. Salir" << endl;
	cout << " " << endl;
	
	cout << "Seleccione una opcion (1-5): ";
	cin >> option;
	cout << " " << endl;
	
	//Menu interactivo usando la estructura switch para seleccionar la operación
	switch (option) {
		case 1:
			cout << "El resultado de " << num1 << " + " << num2 << " es: " << sum << endl;
		break;
		
		case 2:
			cout << "El resultado de " << num1 << " - " << num2 << " es: " << diff << endl;
		break;
		
		case 3:
			cout << "El resultado de " << num1 << " * " << num2 << " es: " << prod << endl;
		break;
		
		case 4:
			cout << "El resultado de " << num1 << " / " << num2 << " es: " << quot << endl;
		break;
		
		case 5:
			cout << "Cerrando..." << endl;
		break;
		
		default:
			cout << "Seleccione una opcion valida." << endl;
		break;
	}
	
	return 0;
	
}
