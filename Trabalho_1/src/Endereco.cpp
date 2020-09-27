#include "Endereco.h"

Endereco::Endereco()
{
    endereco = "";
}


Endereco::Endereco(std::string endereco){
    valida(endereco);
    this->endereco = endereco;
}


std::string Endereco::getEndereco(){
    return endereco;
}


void Endereco::valida(std::string endereco){

    // Verifica se possui o nœmero correto de caracteres.

    if(endereco.length()<MIN_CARACTERE || endereco.length()>MAX_CARACTERE){
        throw std::invalid_argument("Endereco com tamanho invalido.");
    }

    // Verifica o formato.

    std::regex formato = std::regex("^[ ]?([[:upper:]0-9][[:alnum:]]*[. ]?)+$");
    if(!std::regex_match(endereco, formato)){
        throw std::invalid_argument("Endereco em formato invalido.");
    }
}


void Endereco::setEndereco(std::string endereco){
    valida(endereco);
    this->endereco = endereco;
}
