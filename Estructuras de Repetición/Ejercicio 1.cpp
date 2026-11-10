#include <iostream>
//Elaborado por Solórzano Argueta David
//Sistema de promedio grupal

using namespace std;

int main() {
	//Declaración de variables
	float average, gradeSum, enteredGrade;
	
	//Presentación del pograma
	cout << "=== CALCULO DE PROMEDIO GRUPAL ===" << endl;
	cout << " " << endl;
	
	//Bucle que solicita las 5 calificaciones y las suma dentro de gradeSum
	for (int i = 1; i <= 5; i++) {
		cout << "Ingrese la calificacion del alumno " << i << " : ";
		cin >> enteredGrade;
		cout << " " << endl;
		gradeSum = gradeSum + enteredGrade;
	}
	
	//Calcula el promedio y lo muestra al usuario
	average = gradeSum / 5;
	cout << "El promedio grupal es de: " << average << endl;
	
	return 0;
	
}
