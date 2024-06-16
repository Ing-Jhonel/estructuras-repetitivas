#include <iostream>
using namespace std;
// Diseñar un algoritmo que permita leer “n” números por el teclado. El programa debe calcular el promedio de 
// los números pares y el promedio de los números impares.
// ENTRADA: ni: numeros a ingresar  ;  n: numero ingresado	
// SALIDA: pnp: promedio numeros pares  ;  pni: promedio numeros impares

int main (){
	
	double ni, pnp, pni, pares, impares, suma_pares, suma_impares;
	int n;
	cout << "¿Cuantos numeros quiere ingresar?: ";
	cin >> ni;
	
	cout << endl;
	
	int i = 0;
	while (i < ni){
		i = i + 1;
		cout << i << ". ";
		cin >> n;
		if (n % 2 == 0){
			pares = pares + 1;
			suma_pares = suma_pares + n;
		} else {
			impares = impares + 1;
			suma_impares = suma_impares + n;
		}
	}
	pnp = suma_pares/pares;
	pni = suma_impares/impares;
	cout << "El promedio de los " << pares << " numeros pares es: " << pnp << endl;
	cout << "El promedio de los " << impares << " numeros impares es: " << pni << endl;
}

