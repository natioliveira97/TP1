#include "Prazo.h"

Prazo::Prazo()
{
    prazo = 0;
}


Prazo::Prazo(int prazo){
    if(valida(prazo)){
        this->prazo = prazo;
    }
}


int Prazo::getPrazo(){
    return prazo;
}


bool Prazo::valida(int prazo){
    return std::binary_search(PRAZOS.begin(), PRAZOS.end(), prazo);
}


bool Prazo::setPrazo(int prazo){
    if(valida(prazo)){
        this->prazo = prazo;
        return true;
    }
    return false;
}
