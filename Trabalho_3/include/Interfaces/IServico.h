#ifndef INTERFACESERVICOS_H_INCLUDED
#define INTERFACESERVICOS_H_INCLUDED

#include "Dominios/CPF.h"
#include "Dominios/CodigoDeProduto.h"
#include "Dominios/CodigoDeAplicacao.h"
#include "Dominios/Classe.h"

#include "Entidades/Usuario.h"
#include "Entidades/Conta.h"
#include "Entidades/Aplicacao.h"
#include "Entidades/Produto.h"

#include <vector>


class IServicoAutenticacao;
class IServicoPessoal;
class IServicoProdutosFinanceiros;


class IServicoAutenticacao {
    public:
        virtual int autenticar(CPF, Senha) = 0;
        virtual ~IServicoAutenticacao(){}
};


class IServicoPessoal{
public:
        virtual int cadastrarUsuario(Usuario, Conta) = 0;
        virtual int descadastrarUsuario(CPF) = 0;
        virtual Usuario consultarUsuario(CPF) = 0;
        virtual Conta consultarConta(CPF) = 0;
        virtual ~IServicoPessoal(){}
};

class IServicoProdutosFinanceiros{
public:
        virtual int cadastrarProdutoInvestimento(Produto) = 0;
        virtual int descadastrarProdutoInvestimento(CodigoDeProduto) = 0;
        virtual std::vector<Produto> consultarProdutosInvestimento(Classe) = 0;
        virtual int realizarAplicacao(CPF, CodigoDeProduto, Aplicacao) = 0;
        virtual std::vector<Aplicacao> consultarAplicacao(CPF) = 0;
        virtual ~IServicoProdutosFinanceiros(){}

};

#endif // INTERFACESERVICOS_H_INCLUDED
