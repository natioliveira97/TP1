#include "TestPrazo.h"

/**
* @file TestPrazo.cpp
* @author L’via Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*/

TestPrazo::TestPrazo(){
    prazo = new Prazo();
}


TestPrazo::~TestPrazo(){
    delete(prazo);
}


void TestPrazo::run(){
    std::cout << "EXECUTANDO TESTE DE PRAZO VALIDO..." << std::endl;
    testPrazoValido();

    std::cout << std::endl;

    std::cout << "EXECUTANDO TESTE DE PRAZO INVALIDO..." << std::endl;
    testPrazoInvalido();
}

void TestPrazo::testPrazoValido(){
    try{
        prazo->setPrazo(VALOR_VALIDO);

        if(prazo->getPrazo() != VALOR_VALIDO){
            std::cout << "Teste de prazo valido falhou." << std::endl;
        }
        else{
            std::cout << "Teste de prazo valido foi bem sucedido." << std::endl;
        }
    }
    catch(std::invalid_argument &exp){
        std::cout << "Ocorreu excecao: " << exp.what() << std::endl;
        std::cout << "Teste de prazo valido falhou." << std::endl;
    }
}

void TestPrazo::testPrazoInvalido(){
    try{
        prazo->setPrazo(VALOR_INVALIDO);
        std::cout << "Nao ocorreu excessao, teste de prazo invalido falhou." << std::endl;
    }
    catch(std::invalid_argument &exp){
        std::cout << "Ocorreu excecao: " << exp.what() << std::endl;
        std::cout << "Teste de prazo invalido foi bem sucedido." << std::endl;
    }
}
