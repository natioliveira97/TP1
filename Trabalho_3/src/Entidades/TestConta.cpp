#include "Entidades/TestConta.h"

TestConta::TestConta(){
    conta = new Conta();
    nome_entidade = "Conta";
    estado = SUCESSO;
}

TestConta::~TestConta(){
    delete conta;
}

int TestConta::run(){
    testBancoValido();
    testAgenciaValida();
    testNumeroValido();

    return estado;
}


void TestConta::testBancoValido(){
    try{
        CodigoDeBanco banco = CodigoDeBanco(banco_valido);
        conta->setBanco(banco);
        if(conta->getBanco().getCodigoDeBanco() != banco_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestConta::testAgenciaValida(){
    try{
        CodigoDeAgencia agencia = CodigoDeAgencia(agencia_valida);
        conta->setAgencia(agencia);
        if(conta->getAgencia().getCodigoDeAgencia() != agencia_valida){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestConta::testNumeroValido(){
    try{
        Numero numero = Numero(numero_valido);
        conta->setNumero(numero);
        if(conta->getNumero().getNumero() != numero_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

