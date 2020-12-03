#ifndef CNTRAPRESENTACAOPESSOAL_H
#define CNTRAPRESENTACAOPESSOAL_H

#include<string>

#include "Dominios/CEP.h"
#include "Dominios/CodigoDeAgencia.h"
#include "Dominios/CodigoDeBanco.h"
#include "Dominios/CPF.h"
#include "Dominios/Endereco.h"
#include "Dominios/Nome.h"
#include "Dominios/Numero.h"
#include "Dominios/Senha.h"

#include "Entidades/Conta.h"
#include "Entidades/Usuario.h"

#include "Interfaces/IServico.h"
#include "Interfaces/IApresentacao.h"
#include "Servicos/CntrBD.h"
#include "curses.h"


class CntrApresentacaoPessoal:public IApresentacaoPessoal{
    private:
        IServicoPessoal *cntrServicoPessoal;
        void consultarDadosPessoais(CPF);
        void consultarConta(CPF);
        bool descadastrar(CPF);
    public:
        bool executar(CPF);
        void cadastrar();
        void setCntrServicoPessoal(IServicoPessoal*);
};

inline void CntrApresentacaoPessoal::setCntrServicoPessoal(IServicoPessoal *cntr){
    cntrServicoPessoal = cntr;
}

#endif // CNTRAPRESENTACAOPESSOAL_H
