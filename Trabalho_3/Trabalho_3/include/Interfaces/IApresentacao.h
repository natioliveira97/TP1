#ifndef INTERFACEAPRESENTACAO_H_INCLUDED
#define INTERFACEAPRESENTACAO_H_INCLUDED

#include "Dominios/CPF.h"
#include "Interfaces/IServico.h"

class IApresentacaoAutenticacao {
    public:
        virtual bool autenticar(CPF*) = 0;
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};


class IApresentacaoPessoal{
    public:
        virtual bool executar(CPF) = 0;
        virtual void cadastrar() = 0;
        virtual void setCntrServicoPessoal(IServicoPessoal*) = 0;
        virtual void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*) = 0;
        virtual ~IApresentacaoPessoal(){}
};


class IApresentacaoProdutosFinanceiros{
    public:
        virtual void executar() = 0;
        virtual void executar(CPF) = 0;
        virtual void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*) = 0;
        ~IApresentacaoProdutosFinanceiros(){}
};

#endif // INTERFACEAPRESENTACAO_H_INCLUDED
