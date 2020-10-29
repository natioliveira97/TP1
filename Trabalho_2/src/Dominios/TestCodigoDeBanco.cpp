#include "Dominios/TestCodigoDeBanco.h"

TestCodigoDeBanco::TestCodigoDeBanco(){
    codigo = new CodigoDeBanco();
    estado = SUCESSO;
    nome_dominio = "CodigoDeBanco";
}

TestCodigoDeBanco::~TestCodigoDeBanco(){
    delete(codigo);
}


int TestCodigoDeBanco::run(){
    testCodigoValido();
    testCodigoInvalido();
    return estado;
}

void TestCodigoDeBanco::testCodigoValido(){
    try{
        codigo->setCodigoDeBanco(VALOR_VALIDO);

        if(codigo->getCodigoDeBanco() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestCodigoDeBanco::testCodigoInvalido(){
    try{
        codigo->setCodigoDeBanco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
