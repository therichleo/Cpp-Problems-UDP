/*
Rut mágico
 Su número de la suerte se calcula de la siguiente manera:
 auxiliar = (Año de nacimiento + mes de nacimiento + día de
 nacimiento) % 100. Si el valor auxiliar < 9 entonces: Número de la
 suerte es auxiliar + 10. De lo contrario: Número de la suerte es el valor
 auxiliar. Se pide, cree una aplicación que lea una fecha de nacimiento
 en formato AAAAMMDD, un rut sin dígito verificador e indique si el
 rut contiene o no su número de la suerte, en tal caso se dirá que el rut
 es mágico, de lo contrario será normal.
*/

#include <iostream>
using namespace std;
int main(){
    int fecha, rut, anho,mes,dia;
    cout<<"Ingrese su fecha [AAAAMMDD]: "; cin>>fecha;
    cout<<"Ingrese su rut: "; cin>>rut;
    dia = fecha%100;
    fecha = fecha/100;
    mes = fecha%100;
    anho = fecha/100;
    int aux; 
    aux = (anho+mes+dia)%100;
    if(aux<9){
        aux = aux + 10;
        cout<<rut<<" es magico: "<< aux;
        return 0;
    }
    cout<<"rut no es magico";
}