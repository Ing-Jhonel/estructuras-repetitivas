#include <iostream>
using namespace std;

//. Dise�a un algoritmo que reciba un n�mero entero positivo y calcule su factorial. El factorial de un n�mero, representado como n!, 
// es el producto de todos los n�meros positivos menores o iguales a n. Por ejemplo: 5! = 5 � 4 � 3 � 2 � 1 = 120.
// ENTRADA: numero: numero ingresado    
// SALIDA: factorial: factorial del numero

int main() {
    int numero, factorial=1;
    do{
        cout << "Ingrese el numero: ";
        cin >> numero;
        if(numero < 0){
            cout << "el numero debe ser un entero positivo" << endl;
        }
    }while(numero < 0);

    for (int i=1; i<=numero; ++i) {
        factorial = factorial*i;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}
