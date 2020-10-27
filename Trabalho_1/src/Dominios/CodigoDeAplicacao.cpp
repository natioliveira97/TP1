#include "Dominios/CodigoDeAplicacao.h"

CodigoDeAplicacao::CodigoDeAplicacao(){
    codigo = "";
}


std::string CodigoDeAplicacao::getCodigoDeAplicacao(){
    return codigo;
}

void CodigoDeAplicacao::setCodigoDeAplicacao(std::string codigo){
    valida(codigo);
    this->codigo = codigo;

}

void CodigoDeAplicacao::valida(std::string codigo){
    std::regex formato = std::regex("^[0-9][0-9][0-9][0-9][0-9]$");

    if(!regex_match(codigo, formato)){
        throw std::invalid_argument("Codigo com formato invalido.");
    }
    if(codigo == "00000"){
        throw std::invalid_argument("Codigo nao pode ser 00000.");
    }
}

