#include "TestHorario.h"

/**
* @file TestHorario.cpp
* @author L’via Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*/

TestHorario::TestHorario(){
    horario = new Horario();
}

TestHorario::~TestHorario(){
    delete(horario);
}


void TestHorario::run(){
    testHorarioValido();
    std::cout << std::endl;
    testHorarioInvalido();
}

void TestHorario::testHorarioValido(){
    std::cout << "EXECUTANDO TESTE DE HORARIO VALIDO..." << std::endl;
    std::cout << "Entrada valida: " << VALOR_VALIDO << std::endl;
    try{
        horario->setHorario(VALOR_VALIDO);

        if(horario->getHorario() != VALOR_VALIDO){
            std::cout << "Teste de horario valido falhou." << std::endl;
        }
        else{
            std::cout << "Teste de horario valido foi bem sucedido." << std::endl;
        }
    }
    catch(std::invalid_argument &exp){
        std::cout << "Ocorreu excecao: " << exp.what() << std::endl;
        std::cout << "Teste de horario valido falhou." << std::endl;
    }
}

void TestHorario::testHorarioInvalido(){
    std::cout << "EXECUTANDO TESTE DE HORARIO INVALIDO..." << std::endl;
    std::cout << "Entrada invalida: " << VALOR_INVALIDO << std::endl;
    try{
        horario->setHorario(VALOR_INVALIDO);
        std::cout << "Nao ocorreu excecao, teste de horario invalido falhou." << std::endl;
    }
    catch(std::invalid_argument &exp){
        std::cout << "Ocorreu excecao: " << exp.what() << std::endl;
        std::cout << "Teste de horario invalido foi bem sucedido." << std::endl;
    }
}
