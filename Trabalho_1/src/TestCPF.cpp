#include "TestCPF.h"

TestCPF::TestCPF(){
    cpf = new CPF();
    estado = SUCESSO;
}

TestCPF::~TestCPF(){
    delete(cpf);
}


int TestCPF::run(){
    testCPFValido();
    testCPFInvalido();
    return estado;
}

void TestCPF::testCPFValido(){
    try{
        cpf->setCPF(VALOR_VALIDO);

        if(cpf->getCPF() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestCPF::testCPFInvalido(){
    try{
        cpf->setCPF(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
