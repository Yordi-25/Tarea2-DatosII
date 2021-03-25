#include <iostream>
#include "Factory.h"
#include "Golosinas/Golosina.h"
#include "FactoryDulce.h"


Factory* seleccionDeFactory(int numElegido){
    switch(numElegido) {
        case 1: {
            FactoryDulce dulcesdulces;
        }
            break;
        case 2: {
            FactoryDulce dulcesdulces;
        }
        break;
        case 3: {
            FactoryDulce dulcesdulces;
        }
        break;
    }
}

int main(){
    bool seleccion = false;
    while(seleccion == 0) {
        std::string factoryElegida;
        std::cout << "Que golosinas desea?:" << std::endl;
        std::cout << "saladas (1)" << std::endl;
        std::cout << "dulces (2)" << std::endl;
        std::cout << "mani (3)" << std::endl;
        std::cin >> factoryElegida;
        int numElegido;
        try {
            numElegido = stoi(factoryElegida);
            if (0<numElegido && numElegido<4) {
                seleccion = true;
            }
        }catch(...){
            continue;
        }

    }
    FactoryDulce dulcesdulces;
    Golosina* arrayDulces = dulcesdulces.crearGolosinas();




    std::string text = "Golosinas expendidas: [";
    for (int i = dulcesdulces.getGOLOSINAS_POR_BOLSA() - 1; i >= 0; i--) {
        text += arrayDulces[i].getNombre() + " ";
    }
    text += "]";
    std::cout << text<< std::endl;
    delete[] arrayDulces;
    return 0;
}