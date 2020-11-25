#include "Servicos/CntrServicoProdutosFinanceiros.h"

int CntrServicoProdutosFinanceiros::cadastrarProdutoInvestimento(Produto produto){

    try{
        ComandoPesquisarProdutos pesquisar(produto.getCodigo());
        pesquisar.executar();

        std::vector<Produto> produto_retornado;
        produto_retornado = pesquisar.getResultado();

        return 1;
    }
    catch(ENaoExisteNoBanco &exp){
    }

    ComandoCadastrarProduto cadastrar(produto);
    cadastrar.executar();
    return 0;
}

int CntrServicoProdutosFinanceiros::descadastrarProdutoInvestimento(CodigoDeProduto codigo){

    try{
        ComandoPesquisarProdutos pesquisar(codigo);
        pesquisar.executar();

        std::vector<Produto> produto_retornado;
        produto_retornado = pesquisar.getResultado();
    }
    catch(ENaoExisteNoBanco &exp){
        return 1;
    }
    try{
        ComandoPesquisarAplicacao pesquisar(codigo);
        pesquisar.executar();

        std::vector<Aplicacao> apli_retornada;
        apli_retornada = pesquisar.getResultado();
        return 2;
    }
    catch(ENaoExisteNoBanco &exp){
    }


    ComandoRemoverProduto remover(codigo);
    remover.executar();
    return 0;
}

std::vector<Produto> CntrServicoProdutosFinanceiros::consultarProdutosInvestimento(Classe classe){

    ComandoPesquisarProdutos pesquisar(classe);
    pesquisar.executar();

    std::vector<Produto> vetor;
    try{
        vetor = pesquisar.getResultado();
    }
    catch(ENaoExisteNoBanco &exp){
    }

    return vetor;
}

int CntrServicoProdutosFinanceiros::realizarAplicacao(CPF cpf, CodigoDeProduto codigo, Aplicacao aplicacao){
    try{
        ComandoPesquisarAplicacao pesquisar(aplicacao);
        pesquisar.executar();

        std::vector<Aplicacao> apli_retornada;
        apli_retornada = pesquisar.getResultado();
        return 1;
    }
    catch(ENaoExisteNoBanco &exp){
    }

    try{
        ComandoPesquisarProdutos pesquisar(codigo);
        pesquisar.executar();

        std::vector<Produto> pro_return;
        pro_return = pesquisar.getResultado();

        if(aplicacao.getValor().getValorDeAplicacao() < pro_return[0].getValor().getValorMinimo()){
            return 3;
        }
    }
    catch(ENaoExisteNoBanco &exp){
        return 2;
    }

    try{
        ComandoPesquisarAplicacao pesquisar(cpf);
        pesquisar.executar();

        std::vector<Aplicacao> apli_retornada;
        apli_retornada = pesquisar.getResultado();

        if(apli_retornada.size()>=5){
            return 4;
        }
    }
    catch(ENaoExisteNoBanco &exp){
    }

    ComandoCadastrarAplicacao cadastrar(cpf, codigo, aplicacao);
    cadastrar.executar();

    return 0;

}

std::vector<Aplicacao> CntrServicoProdutosFinanceiros::consultarAplicacao(CPF cpf){

    ComandoPesquisarAplicacao pesquisar(cpf);
    pesquisar.executar();

    std::vector<Aplicacao> vetor;
    try{
        vetor = pesquisar.getResultado();
    }
    catch(ENaoExisteNoBanco &exp){
    }
    return vetor;
}


