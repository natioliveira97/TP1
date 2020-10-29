#include "Dominios/TestCodigoDeProduto.h"

TestCodigoDeProduto::TestCodigoDeProduto(){
    codigo = new CodigoDeProduto();
    estado = SUCESSO;
    nome_dominio = "CodigoDeProduto";
}

TestCodigoDeProduto::~TestCodigoDeProduto(){
    delete(codigo);
}


int TestCodigoDeProduto::run(){
    testCodigoValido();
    testCodigoInvalido();
    return estado;
}

void TestCodigoDeProduto::testCodigoValido(){
    try{
        codigo->setCodigoDeProduto(VALOR_VALIDO);

        if(codigo->getCodigoDeProduto() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestCodigoDeProduto::testCodigoInvalido(){
    try{
        codigo->setCodigoDeProduto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
