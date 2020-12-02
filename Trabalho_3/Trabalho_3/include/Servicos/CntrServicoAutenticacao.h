#ifndef CNTRSERVICOAUTENTICACAO_H
#define CNTRSERVICOAUTENTICACAO_H

#include "Interfaces/IServico.h"
#include "Servicos/CntrBD.h"

/**
* @brief Autentica conta para login.
* @param cpf de login.
* @param senha de acesso.
* @return 0 se usu�rio for autenticado.
* @return 1 se senha estiver incorreta.
* @return 2 se usu�rio n�o estiver cadastrado.
* @throw EErroPersistencia
* @throw EErroDeQuery
*/
class CntrServicoAutenticacao:public IServicoAutenticacao{
    public:
        int autenticar(CPF, Senha);
};
#endif // CNTRSERVICOAUTENTICACAO_H
