#include <iostream>
using namespace std;
// Realizar la multiplicación de dos números por medio de la definición de la multiplicación. (sin usar el operador *). Recuerde 3x4= 3+3+3+3 o 4+4+4
// ENTRADA: n1: primer numero  n2: segundo numero 
// SALIDA: resultado= multiplicacion de ambos numeros

int main() {
    int n1, n2, resultado = 0;

    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    for (int i=0; i<n2; i++) {
        resultado = resultado + n1;
    }

    cout << "El resultado de " << n1 << " x " << n2 << " es: " << resultado << endl;

    return 0;
}
