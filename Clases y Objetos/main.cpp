#include<iostream>
#include "Punto.h"

using namespace std;

int main(int argc, char** argv){
    Punto p1(2,1);  //Creación de un objeto estático
    
    cout<<"El valor de X es ahora: "<<p1.getX()<<endl;
    cout<<"El valor de Y es ahora: "<<p1.getY()<<endl;

    return 0;
}