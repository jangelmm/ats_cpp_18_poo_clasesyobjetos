//Implementación de la clase DiaAnio

class DiaAnio{
    //Atributos
    private:
        int dia, mes;
    
    //Métodos
    public:
        //Constructor
        DiaAnio(int _dia, int _mes){
            dia = _dia;
            mes = _mes;
        }

        bool igual(DiaAnio& d);
        void visualizar();
};