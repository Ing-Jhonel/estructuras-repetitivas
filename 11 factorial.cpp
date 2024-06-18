#include <iostream>
using namespace std;

//. Diseña un algoritmo que reciba un número entero positivo y calcule su factorial. El factorial de un número, representado como n!, 
// es el producto de todos los números positivos menores o iguales a n. Por ejemplo: 5! = 5 × 4 × 3 × 2 × 1 = 120.
// ENTRADA: n: numero ingresado    
// SALIDA: fac: factorial del numero

int main() {
    int n, fac=1;
    do{
        cout << "Ingrese el n: ";
        cin >> n;
        if(n < 0){
            cout << "el numero debe ser un entero positivo" << endl;
        }
    }while(n < 0);

    for (int i=1; i<=n; ++i) {
        fac = fac*i;
    }

    cout << "El factorial de " << n << " es: " << fac << endl;

    return 0;
}
