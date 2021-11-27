#include <iostream>
#include <stdlib.h>
using namespace std;


class Humano{

public:
    Humano();
     void vive();
     void come();

};


Humano::Humano(){



}


void Humano::vive(){

cout<<"El humano vive"<<endl;

}


void Humano::come(){
cout<<"El humano come"<<endl;

}



class Estudiante:public Humano{
private:
    int identificacion;
    string nombre;
    string apellido;

public:
    Estudiante(int,string,string);
    void mostrar();


};


Estudiante::Estudiante(int _identificacion, string _nombre, string _apellido){

identificacion = _identificacion;
nombre= _nombre;
apellido = _apellido;

}

void Estudiante::mostrar(){
cout<<"Identificacion: "<<identificacion<<endl;
cout<<"Nombre: "<<nombre<<endl;
cout<<"Apellido: "<<apellido<<endl;

}






int main()
{


    Humano humano;
    humano.vive();
    humano.come();

    cout<<endl;
    Estudiante estudiante(30,"juan","torres");
    estudiante.mostrar();

}
