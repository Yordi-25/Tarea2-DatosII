#include "Golosinas/Golosina.h"

#ifndef TAREA2_DATOSII_FACTORY_H
#define TAREA2_DATOSII_FACTORY_H

class Factory{
    protected:
        const int GOLOSINAS_POR_BOLSA = 10;
    public:
        virtual Golosina* crearGolosinas() = 0;
        int getGOLOSINAS_POR_BOLSA(){
            return GOLOSINAS_POR_BOLSA;
        }

};

#endif //TAREA2_DATOSII_FACTORY_H