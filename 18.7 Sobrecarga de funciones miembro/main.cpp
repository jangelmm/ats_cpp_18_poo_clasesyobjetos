//Sobrecarga de Funciones Miembro

#include <iostream>
#include "Persona.h"

using namespace std;

int main(int argc, char ** argv){
    Persona* persona1 = new Persona("Alejandro", 21);
    persona1->correr();

    Persona* persona2 = new Persona("ABCDE12345");
    persona2->correr(10);

    return 0;
}