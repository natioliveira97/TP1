#include "Entidades/TestProduto.h"

TestProduto::TestProduto(){
    produto = new Produto();
    nome_entidade = "Produto";
    estado = SUCESSO;

}

TestProduto::~TestProduto(){
    delete produto;
}

int TestProduto::run(){
    testCodigoValido();
    testClasseValida();
    testEmissorValido();
    testPrazoValido();
    testTaxaValida();
    testVencimentoValido();
    testHorarioValido();
    testValorValido();

    return estado;
}


void TestProduto::testCodigoValido(){
    try{
        CodigoDeProduto codigo = CodigoDeProduto(codigo_valido);
        produto->setCodigo(codigo);
        if(produto->getCodigo().getCodigoDeProduto() != codigo_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestProduto::testClasseValida(){
    try{
        Classe classe = Classe(classe_valida);
        produto->setClasse(classe);
        if(produto->getClasse().getClasse() != classe_valida){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestProduto::testEmissorValido(){
    try{
        Emissor emissor = Emissor(emissor_valido);
        produto->setEmissor(emissor);
        if(produto->getEmissor().getEmissor() != emissor_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }

}

void TestProduto::testPrazoValido(){
    try{
        Prazo prazo = Prazo(prazo_valido);
        produto->setPrazo(prazo);
        if(produto->getPrazo().getPrazo() != prazo_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }

}

void TestProduto::testTaxaValida(){
    try{
        Taxa taxa = Taxa(taxa_valida);
        produto->setTaxa(taxa);
        if(produto->getTaxa().getTaxa() != taxa_valida){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestProduto::testVencimentoValido(){
    try{
        Data vencimento = Data(vencimento_valido);
        produto->setVencimento(vencimento);
        if(produto->getVencimento().getData() != vencimento_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestProduto::testHorarioValido(){
    try{
        Horario horario = Horario(horario_valido);
        produto->setHorario(horario);
        if(produto->getHorario().getHorario() != horario_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }

}

void TestProduto::testValorValido(){
    try{
        ValorMinimo valor = ValorMinimo(valor_valido);
        produto->setValor(valor);
        if(produto->getValor().getValorMinimo() != valor_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}
