#include "Emissor.h"

Emissor::Emissor(){
    emissor = "";
}

Emissor::Emissor(std::string emissor){
    valida(emissor);
    this->emissor = emissor;
}

std::string Emissor::getEmissor(){
    return emissor;
}

void Emissor::setEmissor(std::string emissor){
    valida(emissor);
    this->emissor = emissor;
}

void Emissor::valida(std::string emissor){
    std::regex formato = std::regex("^.{5,50}$");

    if(!regex_match(emissor, formato)){
            throw std::invalid_argument("Emissor com tamanho invalido.");
    }

    formato = std::regex("^[ ]?([[:upper:]0-9][[:alnum:]]*[. -]?)+$");

    if(!regex_match(emissor, formato)){
            throw std::invalid_argument("Emissor com formato invalido.");
    }
}
