#include "Dominios/TestPrazo.h"

TestPrazo::TestPrazo(){
    prazo = new Prazo();
    estado = SUCESSO;
    nome_dominio = "Prazo";
}

TestPrazo::~TestPrazo(){
    delete(prazo);
}


int TestPrazo::run(){
    testPrazoValido();
    testPrazoInvalido();
    return estado;
}

void TestPrazo::testPrazoValido(){
    try{
        prazo->setPrazo(VALOR_VALIDO);
        if(prazo->getPrazo() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }

}

void TestPrazo::testPrazoInvalido(){
    try{
        prazo->setPrazo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
