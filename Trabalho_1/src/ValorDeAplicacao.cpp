#include "ValorDeAplicacao.h"

ValorDeAplicacao::ValorDeAplicacao()
{
    valor = 0.0;
}


ValorDeAplicacao::ValorDeAplicacao(float valor)
{
    if(valida(valor)){
        this->valor = valor;
    }
}


float ValorDeAplicacao::getValor(){
    return valor;
}


bool ValorDeAplicacao::valida(float valor){
    if(valor<MIN_VALOR || valor>MAX_VALOR){
        return false;
    }
    return true;
}


bool ValorDeAplicacao::setValor(float valor){
    if(valida(valor)){
        this->valor = valor;
        return true;
    }
    return false;
}
