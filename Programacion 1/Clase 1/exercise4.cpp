/*
4. El profesor de contabilidad y costos le pide realizar una
calculadora de interés compuesto. Para esto le indica que el usuario
debe ingresar por teclado las variables Capital inicial (Ci), Periodo (n)
y Tasa de interés (i). El interés compuesto se calcula utilizando la
siguiente fórmula: Cf= Ci * pow(1+i,n)
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int capital_inicial, periodo;
    float interes;
    cout<<"Ingrese capital inicial (Ci): "; cin>>capital_inicial;
    while(capital_inicial<0){
        cout<<"Numero incorrecto, ingrese nuevamente: "; cin>>capital_inicial;
    }
    cout<<"Ingrese periodo (n): "; cin>>periodo;
    while(periodo<0){
        cout<<"Numero incorrecto, ingrese nuevamente: "; cin>>periodo;
    }
    cout<<"Ingrese interes (i): "; cin>>interes;
    while(interes<0){
        cout<<"Numero incorrecto, ingrese nuevamente: "; cin>>interes;
    }
    cout<<"Calculando interes compuesto..."<<endl;
    float Icompuesto = capital_inicial * (pow(1+interes,periodo));
    cout<<Icompuesto;
}