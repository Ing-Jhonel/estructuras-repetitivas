#include <iostream>
using namespace std;
// Un profesor necesita un programa que solicite las notas de N estudiantes del curso ha dictado en la universidad. 
// El programa consultará si desea continuar ingresando notas, y mostrará al final la cantidad de 
// aprobados y desaprobados y el promedio del salón
// ENTRADA: cn: cantidad de estudiantes a anotar  ;  n: nota del estudiante
// SALIDA: a: cantidad de aprobados  ;  d: cantidad de desaprobados  ;  prom: promedio del salon

int main (){
	
	float numeroestudiantes, nota, aprobados=0, desaprobados=0, suma=0, promedio, totalestudiantes;
	char respuesta;
	
	cout << "Indique la cantidad de estudiantes a anotar: ";
	cin >> numeroestudiantes;
	cout << endl;
	int i=1;
	for(; i<=numeroestudiantes; i++){
		cout << i << ". Estudiante: ";
		cin >> nota;
		suma=suma+nota;
		if (nota >= 10.5){
			aprobados=aprobados+1;
		} else{
			desaprobados=desaprobados+1;
		}			
	}
		cout << endl;
		cout << "¿Desea anotar mas estudiantes? (s/n): ";
		cin >> respuesta;
		int aux=i;
		if (respuesta == 's'){
			do{
				cout << endl;
				cout << "Indique la cantidad de estudiantes a anotar: ";
				cin >> numeroestudiantes;
				cout << endl;
				for(int j=1; j<=numeroestudiantes; j++){
					// Creo aux para que al poner "i. Estudiante" se incremente el numero por cada iteracion, por cada estudiante, con
					// el fin de no afectar i.
					cout << aux << ". Estudiante: ";
					cin >> nota;
					suma=suma+nota;
					if (nota >= 10.5){
						aprobados=aprobados+1;
					} else{
						desaprobados=desaprobados+1;
					}
					aux++;
				}
				cout << endl;	
				cout << "¿Desea anotar mas estudiantes? (s/n): ";
				cin >> respuesta;
			} while (respuesta == 's');
		} 
		cout << endl;
		totalestudiantes=aux-1;
		promedio = suma/totalestudiantes;
		cout << "El promedio de notas de los " << totalestudiantes << " estudiantes es: " << promedio << endl;
		cout << "De los " << totalestudiantes << " estudiantes, " << aprobados << " aprobaron." << endl;
		cout << "De los " << totalestudiantes << " estudiantes, " << desaprobados << " desaprobaron." << endl;
		
	return 0;
}
