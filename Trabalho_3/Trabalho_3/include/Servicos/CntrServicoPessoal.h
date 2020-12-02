#ifndef CNTRSERVICOPESSOAL_H
#define CNTRSERVICOPESSOAL_H

#include "Dominios/CPF.h"

#include "Entidades/Usuario.h"
#include "Entidades/Conta.h"

#include "Interfaces/IServico.h"
#include "Servicos/CntrBD.h"

class CntrServicoPessoal:public IServicoPessoal{
    private:

        /**
        * @brief Cadastra uma conta no banco de dados.
        * @param cpf CPF do titular da conta
        * @param conta Conta a ser cadastrada.
        * @return 0 Se conta for cadastrada corretamente.
        * @return 1 Se conta já estiver cadastrada.
        * @throw EErroPercistencia
        * @throw EErroDeQuery
        */
        int cadastrarConta(CPF, Conta);

        /**
        * @brief Descadastra uma conta no banco de dados.
        * @param cpf CPF do titular da conta
        * @return 0 Se conta for descadastrada corretamente.
        * @return 1 Se conta não estiver cadastrada.
        * @throw EErroPercistencia
        * @throw EErroDeQuery
        */
        int descadastrarConta(CPF);
    public:

        /**
        * @brief Cadastra um usuario no banco de dados.
        * @param usuario Usuario a ser cadastrado
        * @param conta Conta relativa a esse usuario.
        * @return 0 Se usuario for cadastrado corretamente.
        * @return 1 Se usuario já estiver cadastrado.
        * @return 2 Se conta não puder ser cadastrada
        * @throw EErroPersistencia
        * @throw EErroDeQuery
        */
        int cadastrarUsuario(Usuario, Conta);

        /**
        * @brief Descadastra um usuario no banco de dados. Apagando também a sua conta e aplicações.
        * @param cpf CPF do titular.
        * @return 0 Se usuario for descadastrado corretamente.
        * @return 1 Se usuario não estiver cadastrado.
        * @throw EErroPersistencia
        * @throw EErroDeQuery
        */
        int descadastrarUsuario(CPF);

        /**
        * @brief Consulta um usuario no banco de dados.
        * @param cpf CPF do titular.
        * @return usuario solicitado.
        * @throw ENaoExisteNoBanco
        * @throw EErroPersistencia
        * @throw EErroDeQuery
        */
        Usuario consultarUsuario(CPF);

        /**
        * @brief Consulta uma conta no banco de dados.
        * @param cpf CPF do titular.
        * @return conta solicitada.
        * @throw ENaoExisteNoBanco
        * @throw EErroPersistencia
        * @throw EErroDeQuery
        */
        Conta consultarConta(CPF);
};

#endif // CNTRSERVICOPESSOAL_H
