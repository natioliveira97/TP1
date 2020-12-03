#include "Entidades/TestAplicacao.h"

TestAplicacao::TestAplicacao() {
    aplicacao = new Aplicacao();
    nome_entidade = "Aplicacao";
    estado = SUCESSO;
}

TestAplicacao::~TestAplicacao() {
    delete aplicacao;
}

int TestAplicacao::run(){
    testCodigoValido();
    testValorValido();
    testDataValida();

    return estado;
}


void TestAplicacao::testCodigoValido(){
    try{
        CodigoDeAplicacao codigo = CodigoDeAplicacao(codigo_valido);
        aplicacao->setCodigo(codigo);
        if(aplicacao->getCodigo().getCodigoDeAplicacao() != codigo_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestAplicacao::testValorValido(){
    try{
        ValorDeAplicacao valor = ValorDeAplicacao(valor_valido);
        aplicacao->setValor(valor);
        if(aplicacao->getValor().getValorDeAplicacao() != valor_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestAplicacao::testDataValida(){
    try{
        Data data = Data(data_valida);
        aplicacao->setData(data);
        if(aplicacao->getData().getData() != data_valida){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

