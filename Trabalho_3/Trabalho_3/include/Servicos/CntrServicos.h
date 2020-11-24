#ifndef CONTROLADORASSERVICO_H_INCLUDED
#define CONTROLADORASSERVICO_H_INCLUDED

#include "Interfaces/IServico.h"
#include "Servicos/CntrBD.h"

class CntrServicoAutenticacao:public IServicoAutenticacao{
    public:
        int autenticar(CPF, Senha);
};

class CntrServicoPessoal:public IServicoPessoal{
    public:
        int cadastrarUsuario(Usuario);
        /*
        virtual bool descadastrarUsuario(CPF) = 0;
        virtual Usuario consultarUsuario(CPF) = 0;
        virtual bool cadastrarConta(Conta) = 0;
        virtual bool descadastrarConta(CPF) = 0;
        virtual Conta consultarConta(CPF) = 0;
        virtual ~IServicoPessoal(){}*/
};


class CntrServicoProdutosFinanceiros:public IServicoProdutosFinanceiros{
};


#endif // CONTROLADORASSERVICO_H_INCLUDED

