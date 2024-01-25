// Punto.cpp - Implementación de Métodos

#include "Punto.h"

// Constructor 1
Punto::Punto(int _x, int _y) {
    x = _x;
    y = _y;
}

// Constructor 2
Punto::Punto() {
    x = y = 0;
}

// Establecer el valor de X
void Punto::setX(int valorX) {
    x = valorX;
}

// Establecer el valor de Y
void Punto::setY(int valorY) {
    y = valorY;
}

// Obtener el valor de X
int Punto::getX() {
    return x;
}

// Obtener el valor de Y
int Punto::getY() {
    return y;
}