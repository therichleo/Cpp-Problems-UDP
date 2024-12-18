/*
1.	Se dice que si un chileno o chilena nace un día 18 o 19 (sin importar el mes) es un(a) patriota, pero si nace un 18 o 19 del mes de septiembre es un(a) súper patriota. 
En cualquier otra fecha es un chileno normal.
Construya una aplicación que lea una fecha de nacimiento en formato aaaammdd y señale si el chileno o chilena es:
Normal, Patriota o Súper Patriota
*/

#include <iostream>
using namespace std;
int main(){
    int AAAAMMDD, mes, dia;
    cout<<"Ingrese fecha de nacimiento en formato [AAAAMMDD]: "; cin>>AAAAMMDD;
    dia = AAAAMMDD%100;
    AAAAMMDD = AAAAMMDD/100;
    mes = AAAAMMDD%100;
    cout<<"Chileno "
    if(mes == 9 && dia == 18){
        cout<<"Super patriota";
    }
    else if(dia == 18){
        cout<<"Patriota";
    }
    else{
        cout<<"Normal"
    }
}