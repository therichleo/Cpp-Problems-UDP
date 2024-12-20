/*
10. Construya una aplicación que lea una secuencia de números ascendentes, la secuencia 
termina cuando se ingresa un número menor al anterior. Al finalizar debe imprimir: 
a. Primer número 
b. Último Número 
c. Promedio 
*/

#include <iostream>
using namespace std;
int main(){
    int numero, siguiente, primero, total, ultimo, iteraciones=1;
    cout<<"Ingrese un numero: "; cin>>numero;
    primero = numero;
    total = numero;
    cout<<"Ingrese otro numero :"; cin>>siguiente;
    iteraciones++
    ultimo = siguiente;
    total = total + ultimo;
    while(ultimo>numero){
        numero = ultimo;
        cout<<"Ingrese otro numero: "; cin>>ultimo;
        total = total + ultimo;
        iteraciones++;
    }
    cout<<"Primer numero: "<<primero<<endl;
    cout<<"Ultimo numero: "<<ultimo<<endl;
    cout<<"Promedio: "<<total/iteraciones;
}