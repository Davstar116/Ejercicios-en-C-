#include <iostream>
//Elaborado por Solórzano Argueta David
//Menú de videojuego

using namespace std;

int main() {
	//Declaración de variables
	int m, option, option2, option3, option4, option5, volume;
	m = 0;
	volume = 10;
	
	//Bucle
	while (m == 0) {
		//Presentación del programa
		cout << "=== MENU ===" << endl;
		cout << " " << endl;
		
		//Imprime el menú
		cout << "1. Jugar" << endl;
		cout << "2. Cagar Partida" << endl;
		cout << "3. Configuracion" << endl;
		cout << "4. Salir" << endl;
		cout << " " << endl;
		
		//Solicita al usuario una option
		cout << "Seleccione una opcion (1-4): ";
		cin >> option;
		cout << " " << endl;
		
		//Segun valor de option ejecuta una u otra función usando estructura switch
		switch (option) {
			case 1:
				//Imprime simulación de inicio de partida
				cout << "Iniciando..." << endl;
				cout << " " << endl;
				cout << "Cargando texturas..." << endl;
				cout << " " << endl;
				cout << "Buena suerte." << endl;
				cout << " " << endl;
			break;
			
			case 2:
				cout << "--- Partidas Guardadas ---" << endl;
				cout << " " << endl;
				cout << "1. Partida 1: Templo del Agua | Lv. 36 | 28 hrs." << endl;
				cout << "2. Partida 2: Ciudad Sagrada | Lv. 81 | 256 hrs." << endl;
				cout << "3. Partida 3: Aldea de los Inicios | Lv. 2 | 0.5 hrs." << endl;
				cout << "4. Salir" << endl;
				cout << " " << endl;
				
				//Solicita al usuario una opcion
				cout << "Seleccione una opcion (1-4): ";
				cin >> option2;
				cout << " " << endl;
				
				switch (option2) {
					case 1:
						cout << "Cargando Partida..." << endl;
						cout << "Templo del Agua" << endl;
						cout << " " << endl;
					break;
					
					case 2:
						cout << "Cargando Partida..." << endl;
						cout << "Ciudad Sagrada" << endl;
						cout << " " << endl;
					break;
					
					case 3:
						cout << "Cargando Partida..." << endl;
						cout << "Aldea de los Inicios" << endl;
						cout << " " << endl;
					break;
					
					case 4:
						cout << "Saliendo..." << endl;
						cout << " " << endl;
					break;
						
					default:
						cout << "Seleccione una opcion valida." << endl;
						cout << " " << endl;
					break;
				}
			break;
			
			case 3:
				cout << "--- Configuracion ---" << endl;
				cout << " " << endl;
				
				cout << "1. Sonido" << endl;
				cout << "2. Dificultad" << endl;
				cout << "3. Salir" << endl;
				cout << " " << endl;
				
				//Solicita al usuario una opcion
				cout << "Seleccione una opción (1-3): ";
				cin >> option3;
				cout << " " << endl;
				
				switch (option3) {
					case 1:
						cout << "--- Sonido ---" << endl;
						cout << " " << endl;
						
						cout << "Volumen: " << volume << endl;
						cout << " " << endl;
						cout << "Desea cambiar el nivel de volumen?" << endl;
						cout << "1. Si" << endl;
						cout << "2. No" << endl;
						cout << "Seleccione una opcion: ";
						cin >> option4;
						cout << " " << endl;
						
						if (option4 == 1) {
							cout << "Ingrese el nuevo nivel de volumen (0-10): ";
							cin >> volume;
							cout << " " << endl;
							cout << "Volumen: " << volume << endl;
							cout << " " << endl;
						}
					break;
					
					case 2:
						cout << "--- Dificultad ---" << endl;
						cout << " " << endl;
						
						cout << "Dificultad Facil" << endl;
						cout << "Complete el juego para desbloquear mas niveles de dificultad." << endl;
						cout << " " << endl;
					break;
					
					case 3:
						cout << "Saliendo..." << endl;
						cout << " " << endl;
					break;
					
					default:
						cout << "Ingrese una opcion valida." << endl;
						cout << " " << endl;
					break;		
				}
			break;
			
			case 4:
				m = 3;
				cout << "Cerrando..." << endl;
				cout << " " << endl;
			break;
			
			default:
				cout << "Ingrese una opcion valida." << endl;
				cout << " " << endl;	
			break;
		} 	
	}
	
	return 0;
	
}
