/*
Números Espejo
 Un reciente estudio reveló que los llamados números espejos poseen propiedades
 matemáticas relevantes para el dominio de la computación cuántica . Un número
 espejo, es un número compuesto de n cifras, donde n siempre es un número impar.
 Además, sus cifras siguen un patrón de repetición donde el último dígito es igual al
 primero, el penúltimo es igual al segundo, el antepenúltimo es igual al tercero y así
 sucesivamente, siguiendo un patrón similar a que existiese un espejo en su cifra
 central. Por ejemplo el numero 1237321 es un numero espejo.
 Considere un numero de 9 dígitos ingresado por el usuario y valide si este cumple
 con la propiedad espejo. Si cumple, debe imprimir por pantalla: ”Es espejo”, en
 caso contrario deberá imprimir: ”No es espejo”.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: "; cin >> n;

    int temp = n;
    int numDigits = 0;

    while (temp > 0) {
        numDigits++;
        temp = temp/10;
    }

    int digits[numDigits];
    temp = n;

    for (int i = numDigits - 1; i >= 0; i--) {
        digits[i] = temp % 10;
        temp /= 10;
    }

    bool isMirror = true;
    for (int i = 0; i < numDigits / 2; i++) {
        if (digits[i] != digits[numDigits - 1 - i]) {
            isMirror = false;
            break;
        }
    }
    
    if (isMirror) {
        cout << "Es espejo" << endl;
    } else {
        cout << "No es espejo" << endl;
    }

    return 0;
}
