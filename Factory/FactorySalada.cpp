#include "FactorySalada.h" 
#include "Golosinas/Golosina.h"

FactorySalada::FactorySalada(){
}
        
Golosina* FactorySalada::crearGolosinas(){
    Golosina* arrayGolosinas = new Golosina[10];
    for (int i = 0; i < 10; i++) {
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