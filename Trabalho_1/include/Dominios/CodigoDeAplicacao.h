#ifndef CODIGODEAPLICACAO_H
#define CODIGODEAPLICACAO_H

#include <string>
#include <regex>

/**
* @file CodigoDeAplicacao.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Código de Aplicação. Essa classe armazena o atributo codigo no formato
* de uma string.
*/

/**
* @brief Armazena o código de aplicação.
*/
class CodigoDeAplicacao
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo codigo como string vazia.
        */
        CodigoDeAplicacao();

        /**
        * @brief Construtor que inicializa código com um valor.
        * @details Para ser válido, o código fornecido deve possuir exatamente
        *          cinco dígitos e ser diferente de '00000'.
        * @param codigo String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        CodigoDeAplicacao(std::string);

        /**
        * @brief Escrita do valor em codigo, se válido.
        * @details Para ser válido, o código fornecido deve possuir exatamente
        *          cinco dígitos e ser diferente de '00000'.
        * @param codigo String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void setCodigoDeAplicacao(std::string);

        /**
        * @brief Leitura do valor armazenado em codigo.
        * @return codigo Retorna string com valor armazenado em codigo.
        */
        std::string getCodigoDeAplicacao();

    private:
        std::string codigo;

        /**
        * @brief Verifica se o código é válido.
        * @details Verifica se o código fornecido possui exatamente cinco dígitos e é diferente de '00000'.
        * @param codigo Código a ser verificado.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void valida(std::string);
};

#endif // CODIGODEAPLICACAO_H

