/*
3. Solicite al usuario un número entero de 3 digitos e imprima el
mismo número al revés. Ejemplo: 345 -> 543
*/

#include <iostream>
using namespace std;
int main(){
    int numero_entero;
    cout<<"Ingrese un numero entero de 3 digitos: "; cin>>numero_entero;
    while(numero_entero<100||numero_entero>999){
        cout<<"Numero invalido, ingrese nuevamente: "; cin>>numero_entero;
    }
    int numero_alrevez=0;
    while(numero_entero>0){
        numero_alrevez=numero_alrevez*10+numero_entero%10;
        numero_entero = numero_entero/10;
    }
    cout<<numero_alrevez;
}
