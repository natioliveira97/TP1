#include "ValorMinimo.h"

ValorMinimo::ValorMinimo()
{
    valor = 0.0;
}


ValorMinimo::ValorMinimo(float valor){
    if(valida(valor)){
        this->valor = valor;
    }
}


float ValorMinimo::getValor(){
    return valor;
}

bool ValorMinimo::valida(float valor){
    return std::binary_search(VALORES.begin(), VALORES.end(), valor);
}


bool ValorMinimo::setValor(float valor){
    if(valida(valor)){
        this->valor = valor;
        return true;
    }
    return false;
}
