#include <iostream> 
#include <cmath>
//Elaborado por Bruno Habid Jiméz García y Solórzano Argueta David
// Calculadora de Ecuaciones Cuadráticas

using namespace std;

int main() {
	//Declararación de variables
	float a, b, c, x1, x2, discriminante, denominador;
	
	//Presentación del programa
	cout << "=== CALCULADORA DE ECUACIONES CUADRATICAS ===" << endl;
	cout << " " << endl;
	
	//Solicita a, b y c al usuario
	cout << "Estructura de una ecuacion cuadratica: " << endl;
	cout << "ax^2 + bx + c = 0" << endl;
	cout << " " << endl;
	
	cout << "Ingrese el valor de a: ";
	cin >> a;
	cout << " " << endl;
	
	cout << "Ingrese el valor de b: ";
	cin >> b;
	cout << " " << endl;
	
	cout << "Ingrese el valor de c: ";
	cin >> c;
	cout << " " << endl;
	
	//Procesamiento de datos y ejecución de la ecuación
	discriminante = pow(b,2) - 4 * a * c;
	denominador = 2 * a;
	
	
	if (discriminante < 0) {
		cout << "El discriminante es negativo, por lo tanto, sus raices son imaginarias." << endl; 
	}
	else {
		//Muestra la ecuación
		cout << "Ecuacion: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
		cout << " " << endl;
		
		//Para x1
		x1 = (-b + sqrt(discriminante)) / denominador;
		
		cout << "El primer resultado es x1 = " << x1 << endl;
		
		//Para x2
		x2 = (-b - sqrt(discriminante)) / denominador;
		
		cout << "El segundo resultado es x2 = " << x2 << endl; 
	}
	
	return 0;
	
}
