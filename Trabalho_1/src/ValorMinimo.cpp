#include "ValorMinimo.h"

ValorMinimo::ValorMinimo()
{
    valor = 0.0;
}


ValorMinimo::ValorMinimo(float valor){
    valida(valor);
    this->valor = valor;
}


float ValorMinimo::getValor(){
    return valor;
}

void ValorMinimo::valida(float valor){
    // verifica se o valor pertence à lista
    if(!std::binary_search(VALORES.begin(), VALORES.end(), valor)){
        throw std::invalid_argument("Valor minimo invalido.");
    }
}


void ValorMinimo::setValor(float valor){
    valida(valor);
    this->valor = valor;
}
