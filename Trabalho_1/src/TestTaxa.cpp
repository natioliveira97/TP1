#include "TestTaxa.h"

TestTaxa::TestTaxa(){
    taxa = new Taxa();
    estado = SUCESSO;
    nome_dominio = "Taxa";
}

TestTaxa::~TestTaxa(){
    delete(taxa);
}


int TestTaxa::run(){
    testTaxaValida();
    testTaxaInvalida();
    return estado;
}

void TestTaxa::testTaxaValida(){
    try{
        taxa->setTaxa(VALOR_VALIDO);

        if(taxa->getTaxa() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestTaxa::testTaxaInvalida(){
    try{
        taxa->setTaxa(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
