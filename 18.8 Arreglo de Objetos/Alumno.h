//Arreglo de Objetos

class Alumno{
    //Atributos
    private:
        float calMate, calProgra, promedio;
    //Métodos
    public:
        Alumno(){
            //Constructor por Defecto
        }
        Alumno(float _calMate, float _calProgra){
            //Constructor 1
            calMate = _calMate;
            calProgra = _calProgra;
        }
        void pedirDatos();
        void mostrarNotas();
};