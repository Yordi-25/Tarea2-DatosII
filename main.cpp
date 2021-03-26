#include <iostream>
#include "Observer/Classes.h"
#include "Factory/Factory.h"
#include "Factory/Golosinas/Golosina.h"
#include "Factory/FactoryDulce.h"


Factory* seleccionDeFactory(int numElegido){
    switch(numElegido) {
        case 1: {
            FactoryDulce dulcesdulces;
        }
            break;
        case 2: {
            FactoryDulce dulcesdulces;
        }
            break;
        case 3: {
            FactoryDulce dulcesdulces;
        }
            break;
    }
}

int main() {
    /*Factory Method*/
    std::cout << "-------------------------- Factory Method --------------------------" << std::endl;
    bool seleccion = false;
    while(seleccion == 0) {
        std::string factoryElegida;
        std::cout << "Que golosinas desea?:" << std::endl;
        std::cout << "saladas (1)" << std::endl;
        std::cout << "dulces (2)" << std::endl;
        std::cout << "mani (3)" << std::endl;
        std::cin >> factoryElegida;
        int numElegido;
        try {
            numElegido = stoi(factoryElegida);
            if (0<numElegido && numElegido<4) {
                seleccion = true;
            }
        }catch(...){
            continue;
        }
    }
    FactoryDulce dulcesdulces;
    Golosina* arrayDulces = dulcesdulces.crearGolosinas();

    std::string text = "Golosinas expendidas: [";
    for (int i = dulcesdulces.getGOLOSINAS_POR_BOLSA() - 1; i >= 0; i--) {
        text += arrayDulces[i].getNombre() + " ";
    }
    text += "]";
    std::cout << text<< std::endl;
    delete[] arrayDulces;

    std::cin.ignore();

    /*Observer*/
    std::cout << "--------------------------- Observer -------------------------" << std::endl;

    Periodico *periodico = new Periodico();

    Suscriptor *suscriptor1 = new Suscriptor(*periodico);
    Suscriptor *suscriptor2 = new Suscriptor(*periodico);
    Suscriptor *suscriptor3 = new Suscriptor(*periodico);

    bool corriendo = true;
    while (corriendo){
        std::string continuar;
        std::string nuevaNoticia;
        std::string cantidadDeSuscriptores = std::to_string(periodico->listaSuscriptores->size());
        std::cout << "---> Publicar nueva noticia para " + cantidadDeSuscriptores + " suscriptores:" << std::endl;
        std::getline(std::cin, nuevaNoticia);

        periodico->publicarNoticia(nuevaNoticia);

        std::cin.clear();
        std::cin.sync();

        std::cout << "---> ¿Publicar otra noticia?" << std::endl;
        std::cout << "Sí (1)" << std::endl;
        std::cout << "No (0)" << std::endl;
        std::getline(std::cin, continuar);
        if (continuar != "1"){ corriendo = false; }
        std::cout << "------------------------------------------------------------" << std::endl;
    }
    std::string cantidadDeNoticias = std::to_string(suscriptor1->listaNoticias->size() );
    std::cout << "Total de noticias publicadas: " + cantidadDeNoticias << std::endl;
}
