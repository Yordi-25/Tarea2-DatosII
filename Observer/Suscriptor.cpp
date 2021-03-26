#include "Classes.h"

Suscriptor::Suscriptor(Periodico &periodico) {
    listaNoticias = new std::list<std::string>();
    periodico.agregarSuscriptor(this);
}

void Suscriptor::actualizarNoticias(std::string noticia) {
    listaNoticias->insert(listaNoticias->end(), noticia);
    log("Nueva noticia publicada: " + noticia);
}