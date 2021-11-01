#include "casillero_construible.h"


Casillero_construible::Casillero_construible(int fila, int columna): Casillero( fila, columna , nombre){
    this->edificio_construido = nullptr;
    this->nombre = "T";
}

string Casillero_construible::obtener_nombre(){
    return nombre;
}

void Casillero_construible::mostrar_casillero(){
    if ( ! edificio_construido ){
        cout << " Soy un casillero construible y me encuentro vacio" << endl;
    }
    else{
        cout << " Soy un casillero construible y no me encuentro vacio" << endl;
        edificio_construido->mostrar_mensaje();
    }
}

void Casillero_construible::agregar_edificio(string nombre, int piedra, int madera, int metal, int maximo){
    if (nombre == "aserradero"){

        this->edificio_construido = new Aserradero(piedra, madera, metal, maximo);

    }
    else if ( nombre == "escuela"){

        this->edificio_construido = new Escuela( piedra, madera, metal, maximo);

    }
    else if ( nombre == "fabrica"){

        this->edificio_construido = new Fabrica( piedra, madera, metal, maximo);

    }
    else if ( nombre == "mina"){

        this->edificio_construido = new Mina( piedra, madera, metal, maximo);

    }
    else if ( nombre == "obelisco"){

        this->edificio_construido = new Obelisco( piedra, madera, metal, maximo);

    }
    else if ( nombre == "planta electrica"){

        this->edificio_construido = new Planta_electrica( piedra, madera, metal, maximo);

    }
}

string Casillero_construible::obtener_nombre_edificio(){

    string nombre_edificio = "";
    if ( edificio_construido ){
        nombre_edificio = edificio_construido->obtener_nombre();
    }
    return nombre_edificio;

}

string Casillero_construible::obtener_diminutivo_edificio(){

    string diminutivo = "";
    if ( edificio_construido ){
        diminutivo = edificio_construido->obtener_diminutivo() ;
    }
    return diminutivo;
}

void Casillero_construible::eliminar_edificio(){
    delete edificio_construido;
    edificio_construido = nullptr;

}

void Casillero_construible::mostrar_coordenadas_edificio(string nombre){

    if ( edificio_construido ){

        if ( nombre == edificio_construido->obtener_nombre()){

            cout << " - (" << fila + 1 << "," << columna + 1 << ") " << endl;

        }

    }
}

