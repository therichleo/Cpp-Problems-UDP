/*
1.
La disco "Sala people" tiene un nuevo normativo en el que a cada
DJ se le pagará un bonus según el género músical con el que
trabaje. Programe una calculadora dada la siguiente tabla:
Genero -> bonus
Reggaeton -> 3%
Old School -> 6%
Cumbia -> 4%
*/

#include <iostream>
using namespace std;

int main() {
    string genero;
    int dinero;
    int dineroB;
    cout << "Ingrese cantidad de dinero general: "; cin >> dinero;

    while (dinero < 0) {
        cout << "Cantidad de dinero invalida, ingrese nuevamente: ";
        cin >> dinero;
    }

    cout << "Ingrese nombre del genero del DJ (Reggaeton, Old School, Cumbia): "; cin >> genero;

    while (genero != "Reggaeton" && genero != "Old School" && genero != "Cumbia") {
        cout << "Nombre de genero invalido, ingrese nuevamente (Reggaeton, Old School, Cumbia): "; cin >> genero;
    }

    if (genero == "Reggaeton") {
        dineroB = (103 * dinero) / 100.0;
    } else if (genero == "Old School") {
        dineroB = (106 * dinero) / 100.0;
    } else if (genero == "Cumbia") {
        dineroB = (104 * dinero) / 100.0;
    }

    cout << "El dinero con bonificación es: " << dineroB << endl;

    return 0;
}
