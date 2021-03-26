#include "FactorySalada.h" 
#include "Golosinas/Golosina.h"

FactorySalada::FactorySalada(){
    golosinasPorBolsa = 10;
}
        
Golosina* FactorySalada::crearGolosinas(){
    Golosina* arrayGolosinas = new Golosina[this->getGOLOSINAS_POR_BOLSA()];
    for (int i = 0; i < this->getGOLOSINAS_POR_BOLSA(); i++) {
        int randomNumber = rand() % 100 + 1;
        if (randomNumber <= 50) {
            ManiSalado maniSalado;
            arrayGolosinas[i] = maniSalado;
        } else if (randomNumber > 50) {
            Almendras almendras;
            arrayGolosinas[i] = almendras;
        }
    }
    return arrayGolosinas;
}