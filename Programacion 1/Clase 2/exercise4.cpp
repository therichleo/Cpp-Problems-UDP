/*
4. Se tiene una calculadora de distancias, la cuál tiene 2 métodos de
operar:
-Se ingresa una distancia A en metros.
-Se ingresan dos puntos en formato (X,Y), se calcula la distancia y
la entrega en metros.
Realice un programa que consulte por dos distancias, ocupando
ambos métodos mencionados, y luego imprima por pantalla qué
distancia es más corta.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int distancia;
    cout<<"Ingrese distancia A (metros): "; cin>>distancia;
    int x,y;
    cout<<"Ingrese distancia x (metros): "; cin>>x;
    cout<<"Ingrese distanca y (metros): "; cin>>y;
    int calculo_distancia = sqrt(pow(x,2)+pow(y,2));
    if(calculo_distancia<distancia){
        cout<<"Distancia mas corta es: "<<calculo_distancia;
    }
    else{
        cout<<"Distancia mas corta es: "<<distancia;
    }
}