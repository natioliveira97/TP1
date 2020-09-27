#include "TestValorDeAplicacao.h"

TestValorDeAplicacao::TestValorDeAplicacao(){
    valor = new ValorDeAplicacao();
    estado = SUCESSO;
    nome_dominio = "ValorDeAplicacao";
}

TestValorDeAplicacao::~TestValorDeAplicacao(){
    delete(valor);
}


int TestValorDeAplicacao::run(){
    testValorDeAplicacaoValido();
    testValorDeAplicacaoInvalido();
    return estado;
}

void TestValorDeAplicacao::testValorDeAplicacaoValido(){
    try{
        valor->setValorDeAplicacao(VALOR_VALIDO);

        if(valor->getValorDeAplicacao() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestValorDeAplicacao::testValorDeAplicacaoInvalido(){
    try{
        valor->setValorDeAplicacao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
