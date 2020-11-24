#ifndef CNTRSERVICOPESSOAL_H
#define CNTRSERVICOPESSOAL_H

#include "Dominios/CPF.h"

#include "Entidades/Usuario.h"
#include "Entidades/Conta.h"

#include "Interfaces/IServico.h"
#include "Servicos/CntrBD.h"

class CntrServicoPessoal:public IServicoPessoal{
    private:
        int cadastrarConta(CPF, Conta);
        int descadastrarConta(CPF);
    public:
        int cadastrarUsuario(Usuario, Conta);
        int descadastrarUsuario(CPF);
        Usuario consultarUsuario(CPF);
        Conta consultarConta(CPF);
};

#endif // CNTRSERVICOPESSOAL_H
