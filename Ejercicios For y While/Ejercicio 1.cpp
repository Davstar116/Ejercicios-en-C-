#include <iostream>
//Elaborado por Bruno Habid Jiménez García y Solórzano Argueta David
//Sistema para contar del 1 al 10

using namespace std;

int main() {
	//Declaración e inicialización de variables
	int numbers, numbersSum;
	numbers = 1, numbersSum = 0;
	
	//Presentación del programa
	cout << "=== SUMA DEL 1 AL 10 ===" << endl;
	cout << " " << endl;
	
	cout << "Numeros del 1 al 10: " << endl;
	
	//Bucle que imprime los numeros del 1 al 10 y los va sumando;
	for (int i = 1; i <= 10; i++) {
		numbersSum = numbersSum + numbers;
		numbers++;
	} 	
	
	cout << "" << endl;
	cout << "La suma de los numeros del 1 al 10 es: " << numbersSum << endl;
	
	return 0;
}
