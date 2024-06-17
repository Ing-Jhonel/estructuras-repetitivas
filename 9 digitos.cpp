#include <iostream>
using namespace std;
// Determine la cantidad de dígitos que tiene un número positivo
// ENTRADA: n: numero ingresado
// SALIDA: cd: cantidad de digitos

int main (){
	
	int n;
	cout << "Introduzca un numero positivo: " << endl << endl;
	cin >> n;
	cout << endl;
// El return 1 sirve para que el programa termine en ese punto y no continue. (se puede usar el while dentro del if, igual, las 2 son validas)
	do{
		if (n<0){
			cout << "El numero es negativo. Intente de nuevo." << endl;
		}
		
	} while(n<0);

	

	int cd = 0;
	int aux = n;

// se usa int para que al ser un decimal, el programa lo entiende como 0, ya que en el int, un numero debe ser entero, no decimal, y cuando llega
// a ese punto, es porque ya no hay que dividir nada mas, y se agrega 1 al contador de digitos.

	while (n > 0){
		aux = aux/10;
		cd = cd + 1;
	}
	
	if(n==0){
		cd=1;
	}
	
	
	cout << "Digitos del numero: " << cd << endl;
	return 0;
}
