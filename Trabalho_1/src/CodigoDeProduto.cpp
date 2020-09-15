#include "CodigoDeProduto.h"

CodigoDeProduto::CodigoDeProduto(){
    codigo = "";
}


std::string CodigoDeProduto::getCodigoDeProduto(){
    return codigo;
}

void CodigoDeProduto::setCodigoDeProduto(std::string codigo){
    valida(codigo);
    this->codigo = codigo;
}

void CodigoDeProduto::valida(std::string codigo){
    std::regex formato = std::regex("^[0-9][0-9][0-9]$");

    if(!regex_match(codigo, formato)){
        throw std::invalid_argument("Codigo com formato invalido.");
    }
    if(codigo == "000"){
        throw std::invalid_argument("Codigo nao pode ser 000.");
    }
}
