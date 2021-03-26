#include "Golosinas/Golosina.h"

#ifndef TAREA2_DATOSII_FACTORY_H
#define TAREA2_DATOSII_FACTORY_H


/*
 * Interfaz Factory, establece la estructura principal de todas las factories
 * creadas
 */
class Factory{
    protected:
        int golosinasPorBolsa;
    public:
        virtual Golosina* crearGolosinas() = 0;
        int getGOLOSINAS_POR_BOLSA(){
            return golosinasPorBolsa;
        }

};

#endif //TAREA2_DATOSII_FACTORY_H