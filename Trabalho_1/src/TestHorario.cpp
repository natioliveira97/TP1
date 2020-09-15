#include "TestHorario.h"


TestHorario::TestHorario(){}

void TestHorario::run(){
    std::cout << "EXECUTANDO TESTE DE HORARIO VALIDO..." << std::endl;
    testHorarioValido();

    std::cout << std::endl;

    std::cout << "EXECUTANDO TESTE DE HORARIO INVALIDO..." << std::endl;
    testHorarioInvalido();
}

void TestHorario::testHorarioValido(){
    try{

        horario = new Horario();
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
    try{
        horario = new Horario();
        horario->setHorario(VALOR_INVALIDO);
        std::cout << "Nao ocorreu excessao, teste de horario invalido falhou." << std::endl;
    }
    catch(std::invalid_argument &exp){
        std::cout << "Ocorreu excecao: " << exp.what() << std::endl;
        std::cout << "Teste de horario invalido foi bem sucedido." << std::endl;
    }
}
