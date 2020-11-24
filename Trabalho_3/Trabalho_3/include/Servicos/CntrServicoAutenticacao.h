#ifndef CNTRSERVICOAUTENTICACAO_H
#define CNTRSERVICOAUTENTICACAO_H

#include "Interfaces/IServico.h"
#include "Servicos/CntrBD.h"

class CntrServicoAutenticacao:public IServicoAutenticacao{
    public:
        int autenticar(CPF, Senha);
};
#endif // CNTRSERVICOAUTENTICACAO_H
