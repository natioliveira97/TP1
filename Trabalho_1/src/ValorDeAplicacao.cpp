#include "ValorDeAplicacao.h"

ValorDeAplicacao::ValorDeAplicacao()
{
    valor = 0.0;
}


ValorDeAplicacao::ValorDeAplicacao(float valor){
    valida(valor);
    this->valor = valor;
}


float ValorDeAplicacao::getValorDeAplicacao(){
    return valor;
}


void ValorDeAplicacao::valida(float valor){
    if(valor<MIN_VALOR || valor>MAX_VALOR){
        throw std::invalid_argument("Valor de aplicacao invalido.");
    }
}


void ValorDeAplicacao::setValorDeAplicacao(float valor){
    valida(valor);
    this->valor = valor;
}
