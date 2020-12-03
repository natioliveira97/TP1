#include "Dominios/TestNome.h"

TestNome::TestNome(){
    nome = new Nome();
    estado = SUCESSO;
    nome_dominio = "Nome";
}

TestNome::~TestNome(){
    delete(nome);
}


int TestNome::run(){
    testNomeValido();
    testNomeInvalido();
    return estado;
}

void TestNome::testNomeValido(){
    try{
        nome->setNome(VALOR_VALIDO);

        if(nome->getNome() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestNome::testNomeInvalido(){
    try{
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
