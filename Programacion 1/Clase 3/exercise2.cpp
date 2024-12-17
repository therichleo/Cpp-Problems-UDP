/*
2.
Un vendedor recibe comisiones por venta siempre y cuando estas
superen los $10.000, la comisión es de un 3% del valor de la venta.
En base a lo anterior construya una aplicación que lea una a una las
ventas de un vendedor hasta que ingrese una venta igual a 0. El
programa debe imprimir:
-Número de ventas
-Ventas mayores a 10.000
-Ventas menores a 10.000
-Cantidad vendida
-Comisión por ventas mayores a 10.000
*/

#include <iostream>
using namespace std;
int main(){
    int venta ,ventas=0 ,mayora10=0 ,menora10=0 ,total=0;
    float comision_total=0;

    cout<<"Ingrese venta: "; cin>>venta;


    while(venta>0){
        ventas++;
        total=total+venta;
        if(venta>10000){
            mayora10++;
            comision_total=comision_total+(3*venta)/100;
        }
        if(venta<10000){
            menora10++;
        }
        cout<<"Ingrese otra venta: "; cin>>venta;
    }
    cout<<"Numero de ventas: "<<ventas<<endl;
    cout<<"Cantidad de ventas mayores a 10.000: "<<mayora10<<endl;
    cout<<"Cantidad de ventas menores a 10.000: "<<menora10<<endl;
    cout<<"Cantidad vendida: "<<total<<endl;
    cout<<"Comision total: "<<comision_total;
}