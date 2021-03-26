#include "Golosina.h"

/*
 * Clase Padre de los posibles elementos expendibles
 */
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