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
        * @throw EErroPersistencia
        * @throw EErroDeQuery
        */
        int cadastrarProdutoInvestimento(Produto);


        /**
        * @brief Descadastra um produto no banco de dados.
        * @param codigo CodigoDeProduto a ser descadastrado.
        * @return 0 Se produto for descadastrado corretamente.
        * @return 1 Se produto não estiver no banco.
        * @return 2 Se houver aplicacoes nesse produto.
        * @throw EErroPercistencia
        * @throw EErroDeQuery
        */
        int descadastrarProdutoInvestimento(CodigoDeProduto);

        /**
        * @brief Consulta produtos de investimento do banco de dados.
        * @param classe Classe de produtos.
        * @return vetor de produtos de investimento.
        * @throw EErroPersistencia
        * @throw EErroDeQuery
        */
        std::vector<Produto> consultarProdutosInvestimento(Classe);

        /**
        * @brief Cadastra uma aplicacao no banco de dados.
        * @param aplicacao Aplicacao a ser realizada.
        * @return 0 Se aplicacao for cadastrada corretamente.
        * @return 1 Se aplicacao já estiver cadastrada.
        * @return 2 Se produto de investimento nao existir.
        * @return 3 Se valor for menor que valor mínimo de investimento.
        * @return 4 Se já tiverem 5 aplicacoes nesse CPF.
        * @throw EErroPersistencia
        * @throw EErroDeQuery
        */
        int realizarAplicacao(CPF, CodigoDeProduto, Aplicacao);

        /**
        * @brief Consulta aplicacoes no banco de dados.
        * @param cpf CPF do titular.
        * @return vetor de aplicacoes.
        * @throw EErroPersistencia
        * @throw EErroDeQuery
        */
        std::vector<Aplicacao> consultarAplicacao(CPF);

};

#endif // CNTRSERVICOPRODUTOSFINANCEIROS_H
