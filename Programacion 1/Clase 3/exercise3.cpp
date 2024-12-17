/*
3.
El club de carreras Francesco Virgolini necesitan un programa que sea
capaz de anotar los tiempos que realizan sus vehículos en N vueltas.
Necesitan un programa que consulte por el tiempo de dos vehículos
iterativamente, V1 y V2, para posteriormente imprimir:
-El promedio de tiempo de cada vehículo en realizar una vuelta.
-El tiempo total que estuvo cada vehículo en la carrera.
-El número de vueltas que realizaron ambos vehículos.
NOTA: El número N no se solicita por teclado.
*/

#include <iostream>
using namespace std;
int main(){
    int N1,N2;
    cout<<"Ingrese numero de vueltas de vehiculo 1: "; cin>>N1;
    cout<<"Ingrese numero de vueltas de vehiculo 2: "; cin>>N2;

    float tiempo=0, aux, promedio1, promedio2, total1, total2;
    
    
    for(int i=1;i<=N1;i++){
        cout<<"ingrese tiempo en vuelta numero "<<i<<" del vehiculo 1: "; cin>>aux;
        tiempo = tiempo + aux;
    }
    total1 = tiempo;
    promedio1 = total1/N1;
    tiempo = 0;
    for(int i=1;i<=N2;i++0){
        cout<<"Ingrese tiempo en vuelta numero "<<i<<" del vehiculo 2: "; cin>>aux;
        tiempo = tiempo + aux;
    }
    total2=tiempo;
    promedio2 = total2/N2;
    
    cout<<"Vehiculo 1"<<endl;
    cout<<"Promedio de tiempo en realizar una vuelta: "<<promedio1<endl;
    cout<<"Tiempo total de carrera: "<<total1<<endl;
    cout<<"Numero de vueltas: "<<N1<<endl;
    cout<<"Vehiculo 2"<<endl;
    cout<<"Promedio de tiempo en realizar una vuelta: "<<promedio2<<endl;
    cout<<"Tiempo total de carrera: "<<total2<<endl;
    cout<<"Numero de vueltas: "<<N2<<endl;
    
}