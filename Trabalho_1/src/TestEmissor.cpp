#include "TestEmissor.h"

TestEmissor::TestEmissor(){
    emissor = new Emissor();
    estado = SUCESSO;
    nome_dominio = "Emissor";
}

TestEmissor::~TestEmissor(){
    delete(emissor);
}


int TestEmissor::run(){
    testEmissorValido();
    testEmissorInvalido();
    return estado;
}

void TestEmissor::testEmissorValido(){
    try{
        emissor->setEmissor(VALOR_VALIDO);

        if(emissor->getEmissor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestEmissor::testEmissorInvalido(){
    try{
        emissor->setEmissor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
