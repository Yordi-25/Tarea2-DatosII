//
// Created by yraul on 24/3/2021.
//

#ifndef TAREA2_DATOSII_FACTORYMANI_H
#define TAREA2_DATOSII_FACTORYMANI_H
#include "Factory.h"

class FactoryMani : public Factory{
public:
    FactoryMani();
    Golosina* crearGolosinas();
};


#endif //TAREA2_DATOSII_FACTORYMANI_H
