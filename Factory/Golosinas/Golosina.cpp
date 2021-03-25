#include "Golosina.h"

Golosina::Golosina(int numPrecio, std::string sabbor){
    precio = numPrecio;
    sabor = sabbor;
}

Golosina::Golosina(){
}

int Golosina::getPrecio(){
    return precio;
}

std::string Golosina::getSabor(){
    return sabor;
}

std::string Golosina::getNombre(){
    return nombre;
}