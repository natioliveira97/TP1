#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>
#include <regex>
#include <stdexcept>

/**
* @file Endereco.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Endereco. Essa classe armazena o atributo endereco no formato
* de uma string.
*/

/**
* @brief Armazena um endereço.
*/
class Endereco
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo endereco como string vazia.
        */
        Endereco();

        /**
        * @brief Construtor que inicializa a classe com valor endereco.
        * @details Para ser válido o valor passado deve ser um texto composto por 5 a 20 caracteres,
        * onde cada caracter pode ser letra (A-Z ou a-z), dígito (0 – 9), ponto ou espaço.
        * Apenas letras e dígitos podem estar em sequência e em termo cujo primeiro caracter é letra, a mesma deve ser maiúscula.
        * @param endereco String a ser escrita no atributo endereco.
        * @throw invalid_argument se nome estiver fora dos critérios especificados.
        */
        Endereco(std::string);

        /**
        * @brief Lê atributo endereco.
        * @return Retorna string com valor armazenado em endereco.
        */
        std::string getEndereco();

        /**
        * @brief Escreve valor no atributo endereco, se o valor for válido.
        * @details Para ser válido o valor passado deve ser um texto composto por 5 a 20 caracteres,
        * onde cada caracter pode ser letra (A-Z ou a-z), dígito (0 – 9), ponto ou espaço.
        * Apenas letras e dígitos podem estar em sequência e em termo cujo primeiro caracter é letra, a mesma deve ser maiúscula.
        * @param endereco String a ser escrita no atributo endereco.
        * @throw invalid_argument se endereco estiver fora dos critérios especificados.
        */
        void setEndereco(std::string);

    private:
        static const int MIN_CARACTERE = 5;
        static const int MAX_CARACTERE = 20;
        std::string endereco;

        /**
        * @brief Valida string endereco, verificando se está no formato correto.
        * @details Para ser válido o valor passado deve ser um texto composto por 5 a 20 caracteres,
        * onde cada caracter pode ser letra (A-Z ou a-z), dígito (0 – 9), ponto ou espaço.
        * Apenas letras e dígitos podem estar em sequência e em termo cujo primeiro caracter é letra, a mesma deve ser maiúscula.
        * @param endereco String a ser validada.
        * @throw invalid_argument se endereco estiver fora dos critérios especificados.
        */
        void valida(std::string);

};

#endif // ENDERECO_H
