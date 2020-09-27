#include "TestNumero.h"

TestNumero::TestNumero(){
    numero = new Numero();
    estado = SUCESSO;
    nome_dominio = "Numero";
}

TestNumero::~TestNumero(){
    delete(numero);
}


int TestNumero::run(){
    testNumeroValido();
    testNumeroInvalido();
    return estado;
}

void TestNumero::testNumeroValido(){
    try{
        numero->setNumero(VALOR_VALIDO);

        if(numero->getNumero() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestNumero::testNumeroInvalido(){
    try{
        numero->setNumero(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
