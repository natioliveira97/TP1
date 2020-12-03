#include "Dominios/CodigoDeBanco.h"

/**
* Códigos de banco válidos.
*/
const std::vector<std::string> CODIGOS = {"341", "001", "237", "104", "033"};

/**
* Bancos correspondentes aos códigos.
*/
const std::vector<std::string> BANCOS = {"Banco Itau Unibanco",
                                         "Banco do Brasil",
                                         "Banco Bradesco",
                                         "Caixa Economica Federal",
                                         "Banco Santander"};

CodigoDeBanco::CodigoDeBanco(){
    codigo = "";
}

CodigoDeBanco::CodigoDeBanco(std::string codigo){
    valida(codigo);
    this->codigo = codigo;
}


std::string CodigoDeBanco::getCodigoDeBanco(){
    return codigo;
}

std::string CodigoDeBanco::getBanco(){
    for(int i = 0; i < (int)CODIGOS.size(); ++i){
        if(codigo == CODIGOS[i]){
            return BANCOS[i];
        }
    }
    return "";
}

void CodigoDeBanco::setCodigoDeBanco(std::string codigo){
    valida(codigo);
    this->codigo = codigo;
}

void CodigoDeBanco::valida(std::string codigo){

    std::regex formato = std::regex("^[0-9][0-9][0-9]$");

    if(!regex_match(codigo, formato)){
        throw std::invalid_argument("Codigo com formato invalido.");
    }

    for(int i = 0; i < (int)CODIGOS.size(); ++i){
        if(codigo == CODIGOS[i])
            return;
    }
    throw std::invalid_argument("Codigo nao aceito.");

}

