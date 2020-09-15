#include "Prazo.h"

/**
* @file Prazo.cpp
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*/

Prazo::Prazo(){
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
    // Verifica se o prazo pertence à lista
    if(!std::binary_search(PRAZOS.begin(), PRAZOS.end(), prazo)){
        throw std::invalid_argument("Prazo invalido.");
    }
}


void Prazo::setPrazo(int prazo){
    valida(prazo);
    this->prazo = prazo;
}
