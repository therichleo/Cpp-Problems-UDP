/*
2. La central espacial de Marcianos-Eke encontró una forma de
identificar las luces del espacio como posibles planetas. Si una luz
emana radiación de color azul, ésta puede ser de un planeta
habitable. Si es de cualquier otro color, se consideraría no habitable.
Cree un programa que permita identificar las luces dependiendo su
color, y que pregunté por un string para poder dar nombre a esta luz,
si es que resulta ser planeta.
*/
#include <iostream>
using namespace std;
int main(){
    string color;
    cout<<"Ingrese color de la luz: "; cin>>color;
    if(color == "azul"){
        cout<<"Posible planeta habitable";
        return 0;
    }
    else{
        cout<<"Planeta no habitable";
    }
    return 0;
}