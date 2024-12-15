/*
1.- Solicite al usuario que ingrese un número entero, para luego
imprimir por pantalla la mitad del número que el usuario ingresó.
*/

#include <iostream>
using namespace std;
int main(){
    int numero;
    cout<<"Ingrese numero entero: "; cin>>numero;
    int nuevo_numero = numero/2;
    cout<<"La mitad de su numero es: " << nuevo_numero << endl;
}

/*
2. Pida al usuario dos decimales y muestre por pantalla el resultado
de la suma, resta, división y producto de los números.
*/