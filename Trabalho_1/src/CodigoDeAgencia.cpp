#include "CodigoDeAgencia.h"

CodigoDeAgencia::CodigoDeAgencia(){
    codigo = "";
}

CodigoDeAgencia::CodigoDeAgencia(std::string codigo){
    valida(codigo);
    this->codigo = codigo;
}


std::string CodigoDeAgencia::getCodigoDeAgencia(){
    return codigo;
}

void CodigoDeAgencia::setCodigoDeAgencia(std::string codigo){
    valida(codigo);
    this->codigo = codigo;
}

void CodigoDeAgencia::valida(std::string codigo){
    std::regex formato = std::regex("^[0-9][0-9][0-9][0-9]$");

    if(!regex_match(codigo, formato)){
        throw std::invalid_argument("Codigo com formato invalido.");
    }
    if(codigo == "0000"){
        throw std::invalid_argument("Codigo nao pode ser 0000.");
    }

}
