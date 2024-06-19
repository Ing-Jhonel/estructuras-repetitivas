#include <iostream>
using namespace std;
// Realizar la multiplicación de dos números por medio de la definición de la multiplicación. (sin usar el operador *). Recuerde 3x4= 3+3+3+3 o 4+4+4
// ENTRADA: numero1: primer numero  numero2: segundo numero 
// SALIDA: resultado= multiplicacion de ambos numeros

int main() {
    int numero1, numero2, resultado = 0;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    for (int i=0; i<numero2; i++) {
        resultado = resultado + numero1;
    }
	cout << endl;
    cout << "El resultado de " << numero1 << " x " << numero2 << " es: " << resultado << endl;

    return 0;
}
