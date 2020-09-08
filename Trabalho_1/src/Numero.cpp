#include "Numero.h"

Numero::Numero()
{
    numero = "";
}


Numero::Numero(std::string numero){
    if(valida(numero)){
        this->numero = numero;
    }
}


std::string Numero::getNumero(){
    return numero;
}


bool Numero::valida(std::string numero){
    std::regex formato = std::regex("^[0-9]{6}-[0-9]$");
    if(std::regex_match(numero, formato)){
        return true;
    }
    return false;
}


bool Numero::setNumero(std::string numero){
    if(valida(numero)){
        this->numero = numero;
        return true;
    }
    return false;
}
