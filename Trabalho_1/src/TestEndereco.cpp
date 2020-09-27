#include "TestEndereco.h"
#include <iostream>
TestEndereco::TestEndereco(){
    endereco = new Endereco();
    estado = SUCESSO;
    nome_dominio = "Endereco";
}

TestEndereco::~TestEndereco(){
    delete(endereco);
}


int TestEndereco::run(){
    testEnderecoValido();
    testEnderecoInvalido();
    return estado;
}

void TestEndereco::testEnderecoValido(){
    try{
        endereco->setEndereco(VALOR_VALIDO);

        if(endereco->getEndereco() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestEndereco::testEnderecoInvalido(){
    try{
        endereco->setEndereco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
