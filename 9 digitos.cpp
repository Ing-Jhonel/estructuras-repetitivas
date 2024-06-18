#include <iostream>
using namespace std;
// Determine la cantidad de dígitos que tiene un número positivo
// ENTRADA: numero: numero ingresado
// SALIDA: cantidaddedigitos: cantidad de digitos

int main (){
	
	long long int numero;
	cout << "Introduzca un numero positivo: " << endl << endl;
	cin >> numero;
	cout << endl;
// El return 1 sirve para que el programa termine en ese punto y no continue. (se puede usar el while dentro del if, igual, las 2 son validas)
	while (numero<0){
		cout << "El numero es negativo. Intente de nuevo." << endl;
		cin >> numero;
	}

	int cantidaddedigitos = 0;

// se usa int para que al ser un decimal, el programa lo entiende como 0, ya que en el int, un numero debe ser entero, no decimal, y cuando llega
// a ese punto, es porque ya no hay que dividir nada mas, y se agrega 1 al contador de digitos.
	if(numero==0){
		cantidaddedigitos=1;
	} else {
		while (numero!=0){
			numero = numero/10;
			cantidaddedigitos = cantidaddedigitos + 1;
		}
	}	
	cout << "Digitos del numero: " << cantidaddedigitos << endl;
	return 0;
}
