#include<iostream>
#include<stdlib.h>
#include"DiaAnio.h"

using namespace std;

int main(int argc, char** argv){

    //Creación de los dos objetos
    DiaAnio* hoy;
    DiaAnio* cumple;

    int d, m;

    cout<<"Introduzca la fecha de hoy, dia: "; 
    cin>>d;
    cout<<"Introduzca la fecha de hoy, mes: "; 
    cin>>m;

    hoy = new DiaAnio(d, m);

    cout<<"\nIntroduzca la fecha de su cumple, dia: ";
    cin>>d;
    cout<<"Introduzca la fecha de su cumple, mes: ";
    cin>>m;
    cout<<endl;

    cumple = new DiaAnio(d, m);

    //Mostrando las fechas
    hoy->visualizar();
    cout<<endl;

    cumple->visualizar();
    cout<<endl;

    if(hoy->igual(*cumple)){
        cout<<"Feliz Cumpleanos!!!"<<endl;
    }
    else{
        cout<<"Tenga un buen dia"<<endl;
    }

    system("pause");
    return 0;
}