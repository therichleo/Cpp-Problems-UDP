/*
7. Construya una aplicación que lea el numerador y denominador de una fracción, su aplicación 
debe simplificar si corresponde la fracción. Ejemplo: 
Ingrese numerador: 6 
Ingrese denominador: 8 
Al simplificar 
Numerador: 3 
Denominador: 4 
*/


#include <iostream>
using namespace std;

int main() {
    int numerador, denominador;
    
    cout << "Ingrese numerador: "; 
    cin >> numerador;
    cout << "Ingrese denominador: "; 
    cin >> denominador;

    while (true) {
        bool dividido = false;
        if (numerador % 2 == 0 && denominador % 2 == 0) {
            numerador /= 2;
            denominador /= 2;
            dividido = true;
        }
        if (numerador % 3 == 0 && denominador % 3 == 0) {
            numerador /= 3;
            denominador /= 3;
            dividido = true;
        }
        if (!dividido) {
            break;
        }
    }
    cout << "Numerador simplificado: " << numerador << endl;
    cout << "Denominador simplificado: " << denominador << endl;
    return 0;
}

