#ifndef NOME_H
#define NOME_H

#include <string>
#include <regex>
#include <stdexcept>

/**
* @file Nome.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Nome. Essa classe armazena o atributo nome no formato
* string e possui métodos para leitura, escrita e validação.
*/


/**
* @brief Armazena um nome.
*/
class Nome
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o nome com string vazia.
        */
        Nome();

        /**
        * @brief Construtor que inicializa a classe com valor nome..
        * @details Para ser válido, o valor nome deve ser um texto composto por 5 a 30
        * caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou espaço,
        * conter pelo menos 5 letras, não conter espaços em sequência e primeira letra
        * de cada termo deve ser letra maiúscula.
        * @param nome String a ser escrita no atributo nome.
        * @throw invalid_argument se nome estiver fora dos critérios especificados.
        */
        Nome(std::string);

        /**
        * @brief Escreve valor no atributo nome, se o valor for válido.
        * @details Para ser válido, o valor nome deve ser um texto composto por 5 a 30
        * caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou espaço,
        * conter pelo menos 5 letras, não conter espaços em sequência e primeira letra
        * de cada termo deve ser letra maiúscula.
        * @param nome String a ser escrita no atributo nome.
        * @throw invalid_argument se nome estiver fora dos critérios especificados.
        */
        void setNome(std::string);

        /**
        * @brief Lê atributo nome.
        * @return Retorna string com valor armazenado em nome.
        */
        std::string getNome();

    private:
        static const int MIN_CARACTERE = 5;
        static const int MAX_CARACTERE = 30;
        std::string nome;

        /**
        * @brief Valida string nome, verificando se esta no formato correto.
        * @details Para ser válido, o valor nome deve ser um texto composto por 5 a 30
        * caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou espaço,
        * conter pelo menos 5 letras, não conter espaços em sequência e primeira letra
        * de cada termo deve ser letra maiúscula.
        * @param nome String a ser validada.
        * @throw invalid_argument se nome estiver fora dos critérios especificados.
        */
        void valida(std::string);
};

#endif // NOME_H
