#include "TestSenha.h"

TestSenha::TestSenha(){
    senha = new Senha();
    estado = SUCESSO;
    nome_dominio = "Senha";
}

TestSenha::~TestSenha(){
    delete(senha);
}


int TestSenha::run(){
    testSenhaValida();
    testSenhaInvalida();
    return estado;
}

void TestSenha::testSenhaValida(){
    try{
        senha->setSenha(VALOR_VALIDO);

        if(senha->getSenha() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestSenha::testSenhaInvalida(){
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
