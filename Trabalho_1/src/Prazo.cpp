#include "Prazo.h"

Prazo::Prazo()
{
    prazo = 0;
}


Prazo::Prazo(int prazo){
    valida(prazo);
    this->prazo = prazo;
}


int Prazo::getPrazo(){
    return prazo;
}


void Prazo::valida(int prazo){
    if(!std::binary_search(PRAZOS.begin(), PRAZOS.end(), prazo)){
        throw std::invalid_argument("Prazo invalido.");
    }
}


void Prazo::setPrazo(int prazo){
    valida(prazo);
    this->prazo = prazo;
}
