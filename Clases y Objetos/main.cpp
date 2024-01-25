#include<iostream>
#include "Punto.h"

using namespace std;

int main(int argc, char** argv){
    Punto p1(2,1);  //Creación de un objeto estático
    
    cout<<"El valor de X es: "<<p1.getX()<<endl;
    cout<<"El valor de Y es: "<<p1.getY()<<endl;

    Punto* p2 = new Punto(5,3);

    p2->setX(10);
    p2->setY(6);

    cout<<"El valor de X es: "<<p2->getX()<<endl;
    cout<<"El valor de Y es: "<<p2->getY()<<endl;

    return 0;
}