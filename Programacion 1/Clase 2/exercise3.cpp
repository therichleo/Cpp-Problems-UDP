/*
3. Un programa de búsqueda de talentos patrocinado por la NBA
está buscándo al estudiante más alto del curso, para propósitos
desconocidos. Necesitan un programa que pregunte por la estatura
de dos alumnos, las compare y decida cuál es la mayor.
Cree este programa e imprima la diferencia junto al nombre del
estudiante. Por ejemplo "Juan es más alto que Diego por 12cm".
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float alumno1, alumno2;
    string nombre1, nombre2;
    cout<<"Ingrese estatura alumno 1: "; cin>>alumno1;
    cout<<"Ingrese nombre de alumno 1: "; cin>>nombre1;
    cout<<"Ingrese estatura alumno 2: "; cin>>alumno2;
    cout<<"Ingrese nombre de alumno 2: "; cin>>nombre2;
    float diferencia = abs(alumno1-alumno2);
    if(alumno1 > alumno2){
        cout<<nombre1<<" es mas alto que "<<nombre2<<" por "<<diferencia<<"cm";
    }
    else{
        cout<<nombre2<<" es mas alto que "<<nombre1<<" por "<<diferencia<<"cm";
    }

}