#include "Endereco.h"

Endereco::Endereco(){
    endereco = "";
}


Endereco::Endereco(std::string endereco){
    if(valida(endereco)){
        this->endereco = endereco;
    }
}


std::string Endereco::getEndereco(){
    return endereco;
}


bool Endereco::valida(std::string endereco){
    if(endereco.length()<MIN_CARACTERE || endereco.length()>MAX_CARACTERE){
        return false;
    }

    std::regex formato = std::regex("^[ ]?([[:upper:]0-9][[:alnum:]]*[. ]?)+$");
    if(std::regex_match(endereco, formato)){
        return true;
    }
    return false;
}


bool Endereco::setEndereco(std::string endereco){
    if(valida(endereco)){
        this->endereco = endereco;
        return true;
    }
    return false;
}
