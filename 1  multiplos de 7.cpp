#include <iostream>
using namespace std;
// Diseñar un algoritmo que imprima en la pantalla los primeros “n” múltiplos de 7 (positivos mayores que cero) 
// ENTRADA: pn: primeros "n" numeros
// SALIDA: mult1, mult2 ... multn: "n" multiplos de 7
int main (){
	
	int pn, mult;
	cout << "Indique cuantos primeros multiplos de n quiere ver: ";
	cin >> pn;
	
	int i = 0;
	while (i < pn){
		i = i + 1;
		mult = 7*i;
		cout << i << ". multiplo de 7 es: " << mult << endl;
	}
	return 0;
}
