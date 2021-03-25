#include "Factory.h"
#include "Golosinas/Golosina.h"

#ifndef TAREA2_DATOSII_FACTORYDULCE_H
#define TAREA2_DATOSII_FACTORYDULCE_H

class FactoryDulce: public Factory{
    public:
        Golosina* crearGolosinas();
        
};

#endif