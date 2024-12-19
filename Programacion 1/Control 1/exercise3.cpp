/*
1. Un corredor demora x segundos en dar la vuelta a la pista atlética, se sabe que cada 3 vueltas 
su rendimiento decrece demorándose un 20% más del tiempo. En base a lo anterior se pide 
construir un programa que lea el número de vueltas que dará y el tiempo que demora en la 
primera vuelta, el programa debe imprimir el tiempo que demorará en dar la n vueltas. 
*/

#include <iostream>
using namespace std;
int main(){
    int numero_vueltas, tiempo_primera_vuelta;
    cout<<"Ingrese numero de vueltas: "; cin>>numero_vueltas;
    cout<<"Ingrese tiempo en primera vuelta: "; cin>>tiempo_primera_vuelta;
    int tiempo_total=0;
    for(int i=2;i<=numero_vueltas;i++){
        if(i%3==0){
            tiempo_primera_vuelta=(120*tiempo_primera_vuelta)/100;
        }
        tiempo_total=tiempo_total+tiempo_primera_vuelta
    }
    cout<<tiempo_total
}
