#include "Classes.h"

Periodico::Periodico(){
    listaSuscriptores = new std::list<Suscriptor>();
}

void Periodico::agregarSuscriptor(Suscriptor *suscriptor) {
    auto position = listaSuscriptores->begin();
    std::advance(position, listaSuscriptores->size());
    listaSuscriptores->insert(position, *suscriptor);
}

void Periodico::publicarNoticia(std::string noticia) {
    for (auto suscriptor = listaSuscriptores->begin(); suscriptor != listaSuscriptores->end(); ++suscriptor) {
        suscriptor->actualizarNoticias(noticia);
    }
}

