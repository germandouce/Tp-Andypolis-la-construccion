#include "casillero_construible.h"


Casillero_construible::Casillero_construible(int fila, int columna): Casillero( fila, columna , nombre){
    this->edificio_construido = nullptr;
    this->nombre = "T";
}

string Casillero_construible::mostrar_nombre(){
    return nombre;
}

void Casillero_construible::mostrar_casillero(){
    if ( ! edificio_construido ){
        cout << "Soy un casillero construible y me encuentro vacio" << endl;
    }
    else{
        cout << "Soy un casillero construible y no me encuentro vacio" << endl;
        cout << edificio_construido->obtener_nombre() << endl;
    }
}

void Casillero_construible::agregar_edificio(string nombre, int piedra, int madera, int metal, int maximo){
    this->edificio_construido = new Edificio(nombre, piedra, madera, metal, maximo);
}

void Casillero_construible::eliminar_edificio(){
    delete edificio_construido;
    edificio_construido = nullptr;
}
