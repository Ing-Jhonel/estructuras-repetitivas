#include <iostream>
using namespace std;
// Realizar un algoritmo que sume los N primeros números naturales usando bucles.
// ENTRADA: primerosnumerosnaturales: primeros numeros naturales
// SALIDA: suma: suma de los pnn

int main (){
	
	int primerosnumerosnaturales, suma;
	cout << "Indique cuantos primeros numeros naturales quiere sumar: "; 
	cin >> primerosnumerosnaturales;
	
	while(primerosnumerosnaturales<=0){
		cout << endl;
		if(primerosnumerosnaturales==0){
			cout << "No ceros. Intente de nuevo." << endl;
		} else if(primerosnumerosnaturales<0){
			cout << "No negativos. Intente de nuevo." << endl;
		}
		cout << "Indique cuantos primeros numeros naturales quiere sumar: ";
		cin >> primerosnumerosnaturales;	
	}
	for (int i=1; i<=primerosnumerosnaturales; i++){
		suma = suma + i;
	}
	cout << endl;
	cout << "La suma de los " << primerosnumerosnaturales << " primeros numeros naturales es: " << suma << endl;
	return 0;
}
