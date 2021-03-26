#include "FactoryDulce.h" 

FactoryDulce::FactoryDulce(){
    golosinasPorBolsa = 10;
}

Golosina* FactoryDulce::crearGolosinas() {
    Golosina* arrayGolosinas = new Golosina[this->getGOLOSINAS_POR_BOLSA()];
    for (int i = 0; i < this->getGOLOSINAS_POR_BOLSA(); i++) {
        int randomNumber = rand() % 100 + 1;
        if (randomNumber <= 50) {
            Bombon bombon("fresa");
            arrayGolosinas[i] = bombon;
        } else if (randomNumber > 50) {
            Botoneta dulce("limón");
            arrayGolosinas[i] = dulce;
        }
    }
    return arrayGolosinas;
}