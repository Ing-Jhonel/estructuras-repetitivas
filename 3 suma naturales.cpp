#include <iostream>
using namespace std;
// Realizar un algoritmo que sume los N primeros números naturales usando bucles.
// ENTRADA: pnn: primeros numeros naturales
// SALIDA: s: suma de los pnn

int main (){
	
	int pnn, s;
	cout << "Indique cuantos primeros numeros naturales quiere sumar: "; 
	cin >> pnn;
	
	int i = 0;
	while (i < pnn){
		i = i + 1;
		s =  i*(i + 1)/2;
	}
	cout << endl;
	cout << "La suma de los " << i << " primeros numeros naturales es: " << s << endl;
	return 0;
}
