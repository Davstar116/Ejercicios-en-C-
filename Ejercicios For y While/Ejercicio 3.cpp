#include <iostream>
//Elaborado por Bruno Habid Jiménez García y Solórzano Argueta David
//Sistema para calcular la suma acumulada

using namespace std;

int main() {
	//Declaracion e inicialización variables
	int enteredNumber, sum;
	sum = 0;
	
	//Presentación del programa
	cout << "=== SUMA ACUMULADA DE NUMEROS ===" << endl;
	cout << " " << endl;
	
	/*
	Solicita un numero al usuario para empezar, se coloca fuera del ciclo para asegurar que se imprima al menos una vez,
	ya que limitamos el uso a un simple ciclo while y no un do-while.
	*/
	cout << "Ingrese un numero (0 para terminar): ";
	cin >> enteredNumber;
	cout << " " << endl;
	
	/*
	Bucle que va sumando los numeros ingresados y pregunta por el siguiente, solicita el siguiente numero
	al final para que al iterar se valide la condición.
	*/
	while(enteredNumber != 0) {
		sum = sum + enteredNumber;
		cout << "La suma acumulada es: " << sum << endl;
		cout << " " << endl;
		cout << " " << endl;
		
		cout << "Ingrese un numero (0 para terminar): ";
		cin >> enteredNumber;
		cout << " " << endl;
	}
	
	cout << "Suma total acumulada: " << sum;
	
	return 0;
	
}
