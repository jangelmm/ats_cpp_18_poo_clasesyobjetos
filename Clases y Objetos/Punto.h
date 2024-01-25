// archivo.h - Declaración de una Clase

class Punto {
private:
    int x, y;

public:
    Punto(int _x, int _y);  // Constructor 1
    Punto();                // Constructor 2

    void setX(int valorX);  // Establecer el valor de X
    void setY(int valorY);  // Establecer el valor de Y
    int getX();             // Obtener el valor de X
    int getY();             // Obtener el valor de Y
};
