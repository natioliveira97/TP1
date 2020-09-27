#ifndef SENHA_H
#define SENHA_H

#include <string>
#include <regex>
#include <algorithm>
#include <stdexcept>

/**
* @file Senha.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Senha. Essa classe armazena o atributo senha no formato
* string.
*/

class Senha
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo senha com string vazia.
        */
        Senha();

        /**
        * @brief Construtor que inicializa a classe com valor para senha.
        * @details A senha deve estar  no formato XXXXXX onde cada X é dígito (0 – 9) e não há dígito repetido.
        * @param senha String a ser escrita no atributo senha.
        * @throw invalid_argument se senha não estiver no formato especificado.
        */
        Senha(std::string);

        /**
        * @brief Escreve valor no atributo senha, se o valor for válido.
        * @details Para ser válido o valor senha deve estar  no formato XXXXXX onde cada X é dígito (0 – 9)
        * e não há dígito repetido.
        * @param senha String a ser escrita no atributo senha
        * @throw invalid_argument se senha estiver fora dos critérios especificados.
        */
        void setSenha(std::string);

        /**
        * @brief Lê atributo senha.
        * @return Retorna string com valor armazenado em senha.
        */
        std::string getSenha();

    private:
        std::string senha;
        /**
        * @brief Valida string senha, verificando se esta no formato correto.
        * @details Para ser válido o valor senha deve estar  no formato XXXXXX onde cada X é dígito (0 – 9)
        * e não há dígito repetido.
        * @param senha String a ser validada.
        * @throw invalid_argument se senha estiver fora dos critérios especificados.
        */
        void valida(std::string);
};

#endif // SENHA_H
