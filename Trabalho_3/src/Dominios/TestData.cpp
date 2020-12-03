#include "Dominios/TestData.h"

TestData::TestData(){
    data = new Data();
    estado = SUCESSO;
    nome_dominio = "Data";
}

TestData::~TestData(){
    delete(data);
}


int TestData::run(){
    testDataValida();
    testDataInvalida();
    return estado;
}

void TestData::testDataValida(){
    try{
        data->setData(VALOR_VALIDO);

        if(data->getData() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestData::testDataInvalida(){
    try{
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
