#include "Dominios/TestCEP.h"

TestCEP::TestCEP(){
    cep = new CEP();
    estado = SUCESSO;
    nome_dominio = "CEP";
}

TestCEP::~TestCEP(){
    delete(cep);
}


int TestCEP::run(){
    testCEPValido();
    testCEPInvalido();
    return estado;
}

void TestCEP::testCEPValido(){
    try{
        cep->setCEP(VALOR_VALIDO);

        if(cep->getCEP() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestCEP::testCEPInvalido(){
    try{
        cep->setCEP(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
