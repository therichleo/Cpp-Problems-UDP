/*
1.
Construya una aplicación que dado dos números a y b indique si
estos son amigos. Dos números son amigos si a es igual a la sumatoria
de los divisores de b (excluyendo b) y b es igual a la sumatoria de los
divisores de a (excluyendo a).
*/

#include <iostream>
using namespace std;
int main(){
    int a,b;
    int divisores_a = 0, divisores_b = 0;
    cout<<"Ingrese numero a: "; cin>>a;
    cout<<"Ingrese numero b: "; cin>>b;
    for(int i=1;i<a;i++){
        if(a%i==0){
            divisores_a=divisores_a+i;
        }
    }
    for(int i=1;i<b;i++){
        if(b%i==0){
            divisores_b=divisores_b+i;
        }
    }
    if(a==divisores_b&&b==divisores_a){
        cout<<"Numeros amigos";
    }
    else{
        cout<<"Numeros no amigos";
    }
}