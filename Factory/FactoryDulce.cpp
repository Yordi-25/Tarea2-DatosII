#include "FactoryDulce.h" 
        
Golosina* FactoryDulce::crearGolosinas() {
    Golosina* arrayGolosinas = new Golosina[10];
    for (int i = 0; i < 10; i++) {
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