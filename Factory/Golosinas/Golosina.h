#include <iostream>

#ifndef TAREA2_DATOSII_GOLOSINA_H
#define TAREA2_DATOSII_GOLOSINA_H


class Golosina{
    protected:
        int precio;
        std::string nombre;
        std::string sabor;
    public:
        Golosina(int numPrecio, std::string sabor);
        Golosina();
        int getPrecio();
        std::string getNombre();
        std::string getSabor();
};

class Bombon : public Golosina{
public:
    Bombon(std::string);
};

class Botoneta: public Golosina{
private:
public:
    Botoneta(std::string sabor);

};

class ManiSalado : public Golosina{
public:
    ManiSalado();
};

class Almendras: public Golosina{
    public:
        Almendras();
};

#endif //TAREA2_DATOSII_GOLOSINA_H