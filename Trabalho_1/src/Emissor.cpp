#include "Emissor.h"

Emissor::Emissor(){
    emissor = "";
}

std::string Emissor::getEmissor(){
    return emissor;
}

bool Emissor::setEmissor(std::string emissor){
    if (valida(emissor)){
        this->emissor = emissor;
        return true;
    }
    return false;
}

bool Emissor::valida(std::string emissor){
    std::regex formato = std::regex("^.{5,50}$");

    if(!regex_match(emissor, formato)){
            return false;
    }

    return false;
}
