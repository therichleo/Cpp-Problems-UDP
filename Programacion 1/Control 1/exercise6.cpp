/*
14. Construya una aplicación que evalúe la función -x2 + 100x 
entre el intervalo entero [0, 100] 
e indique cuántos valores son: 
a. Menores a 100 
b. >100 y < 200 
c. >= 200 y < 300 
d. > 400
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int funcion, menores100=0, entremedio100y200=0, entremedio200y300=0, mayor400=0;
    for(int i = 0; i<=100; i++){
        funcion = (-1)*pow(i,2)+100*i;
        if(funcion<100){
            menores100++;
        }
        if(funcion>100&&funcion<200){
            entremedio100y200++;
        }
        if(funcion>=200&&funcion<300){
            entremedio200y300++;
        }
        if(funcion>400){
            mayor400++;
        }
    }
    cout<<"Menores a 100: "<<menores100<<endl;
    cout<<">100 Y <200: "<<entremedio100y200<<endl;
    cout<<">=200 y <300: "<<entremedio200y300<<endl;
    cout<<">400: "<<mayor400<<endl;
}