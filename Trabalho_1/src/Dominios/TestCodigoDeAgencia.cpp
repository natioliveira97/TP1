#include "Dominios/TestCodigoDeAgencia.h"

TestCodigoDeAgencia::TestCodigoDeAgencia(){
    codigo = new CodigoDeAgencia();
    estado = SUCESSO;
    nome_dominio = "CodigoDeAgencia";
}

TestCodigoDeAgencia::~TestCodigoDeAgencia(){
    delete(codigo);
}


int TestCodigoDeAgencia::run(){
    testCodigoValido();
    testCodigoInvalido();
    return estado;
}

void TestCodigoDeAgencia::testCodigoValido(){
    try{
        codigo->setCodigoDeAgencia(VALOR_VALIDO);

        if(codigo->getCodigoDeAgencia() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestCodigoDeAgencia::testCodigoInvalido(){
    try{
        codigo->setCodigoDeAgencia(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}

