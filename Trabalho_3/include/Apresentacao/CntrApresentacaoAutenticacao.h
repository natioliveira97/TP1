#ifndef CNTRAPRESENTACAOAUTENTICACAO_H
#define CNTRAPRESENTACAOAUTENTICACAO_H

#include "Dominios/CPF.h"
#include "Dominios/Senha.h"
#include "Interfaces/IServico.h"
#include "Interfaces/IApresentacao.h"
#include "Servicos/CntrBD.h"
#include "curses.h"

class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao{
    private:
        IServicoAutenticacao *cntr;
    public:
        bool autenticar(CPF*);
        void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

inline void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao *cntr){
    this->cntr = cntr;
}

#endif // CNTRAPRESENTACAOAUTENTICACAO_H
