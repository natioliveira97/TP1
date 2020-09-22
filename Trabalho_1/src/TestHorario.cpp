#include "TestHorario.h"

TestHorario::TestHorario(){
    horario = new Horario();
}

TestHorario::~TestHorario(){
    delete(horario);
}


int TestHorario::run(){
    testHorarioValido();
    testHorarioInvalido();
    return estado;
}

void TestHorario::testHorarioValido(){
    try{
        horario->setHorario(VALOR_VALIDO);
        if(horario->getHorario() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }

}

void TestHorario::testHorarioInvalido(){
    try{
        horario->setHorario(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
