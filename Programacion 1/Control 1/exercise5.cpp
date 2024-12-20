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
    int numero, total, ultimo, iteraciones=1;
    cout<<"Ingrese un numero: "; cin>>numero;
    total = numero;
    cout<<"Ingrese otro numero: "; cin>>ultimo;
    iteraciones++;
    total = total + ultimo;
    if(siguiente<numero){
        cout<<"primer numero: "<<numero<<endl;
        cout<<"ultimo numero: "<<ultimo<<endl;
        cout<<"promedio: "<<total/iteraciones;
        return 0;
    }
    while(siguiente>numero){
        cout<<"Ingrese otro numero: "; cin>>ultimo;
    }
}