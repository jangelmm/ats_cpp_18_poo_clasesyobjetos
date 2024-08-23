#include <iostream>
#include "Alumno.h"

using namespace std;

void Alumno::pedirDatos(){
    cout<<"Digite la calificacion de Matematicas: ";
    cin>>calMate;

    cout<<"Digite la calificacion de Programacion: ";
    cin>>calProgra;
}

void Alumno::mostrarNotas(){
    cout<<"Nota de Matematicas: "<<calMate<<endl;
    cout<<"Nota de Programacion: "<<calProgra<<endl;
    cout<<"Promedio: "<<(calMate + calProgra)/2<<endl;
}