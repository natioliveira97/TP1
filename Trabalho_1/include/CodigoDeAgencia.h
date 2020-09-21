#ifndef CODIGODEAGENCIA_H
#define CODIGODEAGENCIA_H

#include <string>
#include <regex>

/**
* @file CodigoDeAgencia.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Código de Agência. Essa classe armazena o atributo codigo no formato
* de uma string.
*/

/**
* @brief Armazena o código de agência.
*/
class CodigoDeAgencia
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo codigo como string vazia.
        */
        CodigoDeAgencia();

        /**
        * @brief Escrita do valor em codigo, se válido.
        * @details Para ser válido, o código fornecido deve possuir exatamente
        *          quatro dígitos e ser diferente de '0000'.
        * @param codigo String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void setCodigoDeAgencia(std::string);

        /**
        * @brief Leitura do valor armazenado em codigo.
        * @return codigo Retorna string com valor armazenado em codigo.
        */
        std::string getCodigoDeAgencia();

    private:
        std::string codigo;

        /**
        * @brief Verifica se o código é válido.
        * @details Verifica se o código fornecido possui exatamente quatro dígitos e é diferente de '0000'.
        * @param codigo Código a ser verificado.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void valida(std::string);
};

#endif // CODIGODEAGENCIA_H
