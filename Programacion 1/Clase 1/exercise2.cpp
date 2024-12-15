/*
2. Pida al usuario dos decimales y muestre por pantalla el resultado
de la suma, resta, división y producto de los números.
*/

#include <iostream>
using namespace std;
int main(){
    float Decimal_uno, Decimal_dos;
    cout<<"INGRESE DOS DECIMALES: " ; cin>>Decimal_uno>>Decimal_dos;
    int suma, resta, division, producto;
    suma = Decimal_uno + Decimal_dos;
    resta = Decimal_uno - Decimal_dos;
    division = Decimal_uno/Decimal_dos;
    producto = Decimal_uno * Decimal_dos;
    cout<<"Suma: "<<suma<<endl<<"Resta: "<<resta<<endl<<"Division: "<<division<<endl<<"Producto: "<<producto;
}