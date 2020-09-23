#include "TestClasse.h"

TestClasse::TestClasse(){
    classe = new Classe();
    estado = SUCESSO;
}

TestClasse::~TestClasse(){
    delete(classe);
}


int TestClasse::run(){
    testClasseValida();
    testClasseInvalida();
    return estado;
}

void TestClasse::testClasseValida(){
    try{
        classe->setClasse(VALOR_VALIDO);

        if(classe->getClasse() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestClasse::testClasseInvalida(){
    try{
        classe->setClasse(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &exp){
        return;
    }
}
