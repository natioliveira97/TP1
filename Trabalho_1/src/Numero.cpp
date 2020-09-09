#include "Numero.h"

Numero::Numero()
{
    numero = "";
}


Numero::Numero(std::string numero){
    valida(numero);
    this->numero = numero;
}


std::string Numero::getNumero(){
    return numero;
}


void Numero::valida(std::string numero){
    std::regex formato = std::regex("^[0-9]{6}-[0-9]$");
    if(std::regex_match(numero, formato)){
        return;
    }
    throw std::invalid_argument("Numero em formato invalido.");
}


void Numero::setNumero(std::string numero){
    valida(numero);
    this->numero = numero;
}
