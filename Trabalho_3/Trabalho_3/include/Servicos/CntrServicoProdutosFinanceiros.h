#ifndef CNTRSERVICOPRODUTOSFINANCEIROS_H
#define CNTRSERVICOPRODUTOSFINANCEIROS_H

#include "Dominios/CodigoDeProduto.h"
#include "Dominios/Classe.h"

#include "Entidades/Usuario.h"
#include "Entidades/Conta.h"
#include "Entidades/Produto.h"
#include "Entidades/Aplicacao.h"

#include "Interfaces/IServico.h"
#include "Servicos/CntrBD.h"

#include <vector>

class CntrServicoProdutosFinanceiros:public IServicoProdutosFinanceiros{
    public:
        /**
        * @brief Cadastra um produto no banco de dados.
        * @param produto Produto a ser cadastrado.
        * @return 0 Se produto for cadastrado corretamente.
        * @return 1 Se produto já estiver cadastrado.
        * @throw EErroPercistencia
        * @throw EErroDeQuery
        */
        int cadastrarProdutoInvestimento(Produto);


        /**
        * @brief Descadastra um produto no banco de dados.
        * @param codigo CodigoDeProduto a ser descadastrado.
        * @return 0 Se produto for descadastrado corretamente.
        * @return 1 Se produto não estiver no banco.
        * @throw EErroPercistencia
        * @throw EErroDeQuery
        */
        int descadastrarProdutoInvestimento(CodigoDeProduto);

        /**
        * @brief Consulta produtos de investimento do banco de dados.
        * @param classe Classe de produtos.
        * @return vetor de produtos de investimento.
        * @throw EErroPercistencia
        * @throw EErroDeQuery
        */
        std::vector<Produto> consultarProdutosInvestimento(Classe);

        /**
        * @brief Cadastra um produto no banco de dados.
        * @param produto Produto a ser cadastrado.
        * @return 0 Se produto for cadastrado corretamente.
        * @return 1 Se produto já estiver cadastrado.
        * @throw EErroPercistencia
        * @throw EErroDeQuery
        */
        int realizarAplicacao(CPF, CodigoDeProduto, Aplicacao);
        std::vector<Aplicacao> consultarAplicacao(CPF);

};

#endif // CNTRSERVICOPRODUTOSFINANCEIROS_H
