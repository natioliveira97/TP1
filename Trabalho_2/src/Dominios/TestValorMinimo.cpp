#include "Dominios/TestValorMinimo.h"

TestValorMinimo::TestValorMinimo(){
    valor = new ValorMinimo();
    estado = SUCESSO;
    nome_dominio = "ValorMinimo";
}

TestValorMinimo::~TestValorMinimo(){
    delete(valor);
}


int TestValorMinimo::run(){
    testValorMinimoValido();
    testValorMinimoInvalido();
    return estado;
}

void TestValorMinimo::testValorMinimoValido(){
    try{
        valor->setValorMinimo(VALOR_VALIDO);

        if(valor->getValorMinimo() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestValorMinimo::testValorMinimoInvalido(){
    try{
        valor->setValorMinimo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
