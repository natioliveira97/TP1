#include "TestCodigoDeAplicacao.h"

TestCodigoDeAplicacao::TestCodigoDeAplicacao(){
    codigo = new CodigoDeAplicacao();
    estado = SUCESSO;
    nome_dominio = "CodigoDeAplicacao";
}

TestCodigoDeAplicacao::~TestCodigoDeAplicacao(){
    delete(codigo);
}


int TestCodigoDeAplicacao::run(){
    testCodigoValido();
    testCodigoInvalido();
    return estado;
}

void TestCodigoDeAplicacao::testCodigoValido(){
    try{
        codigo->setCodigoDeAplicacao(VALOR_VALIDO);

        if(codigo->getCodigoDeAplicacao() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestCodigoDeAplicacao::testCodigoInvalido(){
    try{
        codigo->setCodigoDeAplicacao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
