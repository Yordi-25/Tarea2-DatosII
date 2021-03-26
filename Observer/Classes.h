#pragma once
#include <iostream>
#include "list"
#include "string"
#define log(message) std::cout<<message<<std::endl;

class Observador {
public:
    virtual void actualizarNoticias(std::string noticia) = 0;
};

class Periodico;

class Suscriptor : public Observador{
public:
    std::list<std::string> *listaNoticias;
    Suscriptor(Periodico& periodico);
    virtual void actualizarNoticias(std::string noticia); //Actualiza la lista de noticias cada vez que el periodico publica una
};

class Periodico {
public:
    std::list<Suscriptor> *listaSuscriptores;
    Periodico();
    void agregarSuscriptor(Suscriptor* suscriptor); //Añade un suscriptor que será notificado cuando se agregue una noticia
    void publicarNoticia(std::string noticia); //Publica una noticia y notifica a todos los suscriptores
};