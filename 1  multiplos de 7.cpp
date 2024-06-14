#include <iostream>
using namespace std;
// Diseñar un algoritmo que imprima en la pantalla los primeros “n” múltiplos de 7 (positivos mayores que cero) 
// ENTRADA: primerosnmultiplos: primeros "n" numeros
// SALIDA: mult1, mult2 ... multn: "n" multiplos de 7
int main (){
	
	int primerosnmultiplos, multiplico;
	cout << "Indique cuantos primeros multiplos de n quiere ver: ";
	cin >> primerosnmultiplos;
	cout << endl;
	
	int i = 0;
	while (i < primerosnmultiplos){
		i++;
		multiplico = 7*i;
		cout << i << ". multiplo de 7 es: " << multiplico << endl;
	}
	return 0;
}
