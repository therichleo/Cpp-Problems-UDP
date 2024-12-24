/*
Conjetura de Collatz
 La conjetura de collatz consiste en lo siguiente: Considere un número
 "N" cualquiera, para este ejercicio los dos últimos digitos de su rut
 (sin contar verificador). Si este número "N" es impar, deberá
 multiplicarlo por 3 y sumarle 1. Si el número "N" es par, deberá
 dividirlo por dos. Cree un programa que deberá hacer continuamente
 estas operaciones hasta "N" tenga un valor igual a 1, donde entonces
 imprimirá:
 Número de veces que se multiplicó el número "N".
 Número de veces que se dividió el número "N".
*/

#include <iostream>
using namespace std;
int main(){
    int n, multiplicaciones=0, divisiones=0;
    cout<<"Ingrese N: "; cin>>n;
    while(n>1){
        if(n%3==0){
            n=(n*3)+1;
            multiplicaciones++;
        }
        else{
            n=n/2;
            divisiones++;
        }
    }
    cout<<"Numero de veces :"<<multiplicaciones<<dividisiones;
}