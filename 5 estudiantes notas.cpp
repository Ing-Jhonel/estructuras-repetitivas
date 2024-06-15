#include <iostream>
using namespace std;
// Un profesor necesita un programa que solicite las notas de N estudiantes del curso ha dictado en la universidad. 
// El programa consultará si desea continuar ingresando notas, y mostrará al final la cantidad de 
// aprobados y desaprobados y el promedio del salón
// ENTRADA: cn: cantidad de estudiantes a anotar  ;  n: nota del estudiante
// SALIDA: a: cantidad de aprobados  ;  d: cantidad de desaprobados  ;  prom: promedio del salon

int main (){
	
	float cn, n, a=0, d=0, s=0, prom;
	char r;
	
	cout << "Indique la cantidad de estudiantes a anotar: ";
	cin >> cn;
	cout << endl;
	
	int i = 0;
	while (i < cn){
		i= i + 1;
		cout << i << ". Estudiante: ";
		cin >> n;
		s = s + n;
		if (n >= 10.5){
			a = a + 1;
		} else{
			d = d + 1;
		}		
	}
	
		cout << "¿Desea anotar mas estudiantes? (s/n): ";
		cin >> r;
		if (r == 's'){
			do{
				cout << "Ingrese la nota: ";
				cin >> n;
				s = s + n;
				
				if (n >= 10.5){
					a = a + 1;
				} else{
					d = d + 1;
				}
				
				cout << "¿Desea anotar mas estudiantes? (s/n): ";
				cin >> r;
				i= i + 1;
			} while (r == 's');
		} 
		
		
		prom = s/i;
		cout << "El promedio de notas de los " << i << " estudiantes es: " << prom << endl;
		cout << "De los " << i << " estudiantes, " << a << " aprobaron." << endl;
		cout << "De los " << i << " estudiantes, " << d << " desaprobaron." << endl;
		
	return 0;
}
