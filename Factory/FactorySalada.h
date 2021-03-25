#include "Factory.h"

#ifndef TAREA2_DATOSII_FACTORYSALADA_H
#define TAREA2_DATOSII_FACTORYSALADA_H

class FactorySalada: public Factory{
    public:
        FactorySalada();
        Golosina* crearGolosinas();
        
};

#endif