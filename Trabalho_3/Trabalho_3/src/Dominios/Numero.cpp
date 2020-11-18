#include "Dominios/Numero.h"

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


void Numero::validaDigitoVerificador(std::string numero){

    int digito_verificador = 0;
    int j = 0;


    /**
    * Algoritmo do digito verificador
    */
    for(int i = 7; i >= 2; --i){
        digito_verificador += i*std::stoi(numero.substr(j, 1));
        ++j;
    }
    digito_verificador = 11-digito_verificador%11;

    /**
     * Verificacao.
     */
    if(digito_verificador != std::stoi(numero.substr(7, 1))){
        throw std::invalid_argument("Numero com digito verificador invalido.");
    }
}


void Numero::valida(std::string numero){
    std::regex formato = std::regex("^[0-9]{6}-[0-9]$");
    if(!std::regex_match(numero, formato)){
        throw std::invalid_argument("Numero em formato invalido.");
    }
    validaDigitoVerificador(numero);
}


void Numero::setNumero(std::string numero){
    valida(numero);
    this->numero = numero;
}
