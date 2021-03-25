//
// Created by yraul on 24/3/2021.
//

#include "FactoryMani.h"

Golosina* FactoryMani::crearGolosinas() {
    Golosina* arrayGolosinas = new Golosina[10];
    for (int i = 0; i < 10; i++) {
            ManiSalado mani;
            arrayGolosinas[i] = mani;
    }
    return arrayGolosinas;
}