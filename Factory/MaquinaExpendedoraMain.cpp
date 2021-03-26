#include <iostream>
#include "Factory.h"
#include "Golosinas/Golosina.h"
#include "FactoryDulce.h"
#include "FactorySalada.h"

/*
 * Lleva a cabo la selección de la factory
 */
Factory* seleccionDeFactory(int numElegido){
    Factory* factory;
    switch(numElegido) {
        case 1: {
            FactorySalada salada;
            factory = &salada;
            return factory;
        }
        case 2: {
            FactoryDulce dulce;
            factory = &dulce;
            return factory;
        }
    }
}

int main(){
    bool seleccion = false;
    int numElegido;
    while(seleccion == 0) {
        std::string factoryElegida;
        std::cout << "Que golosinas desea?:" << std::endl;
        std::cout << "saladas (1)" << std::endl;
        std::cout << "dulces (2)" << std::endl;
        std::cin >> factoryElegida;
        try {
            numElegido = stoi(factoryElegida);
            if (0<numElegido && numElegido<3) {
                seleccion = true;
            }
        }catch(...){
            continue;
        }
    }
    Factory* factory = seleccionDeFactory(numElegido);
    Golosina* arrayDulces = factory->crearGolosinas();
    std::string text = "Golosinas expendidas: [";
    for (int i = factory->getGOLOSINAS_POR_BOLSA() - 1; i >= 0; i--) {
        text += arrayDulces[i].getNombre() + " ";
    }
    text += "]";
    std::cout << text<< std::endl;
    delete[] arrayDulces;
    return 0;
}