#ifndef CEP_H
#define CEP_H

#include <string>
#include <array>
#include <vector>

/**
* @file CEP.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio CEP. Essa classe armazena o atributo cep no formato
* de uma string e a cidade correspondente.
*/

/**
* @brief Armazena um cep e sua cidade correspondente.
*/
class CEP
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa os atributos cep com valor zero e cidade como string vazia.
        */
        CEP();

        /**
        * @brief Construtor que inicializa a classe com valor para cep.
        * @details Para ser válido, o cep passado deve pertencer às faixas de valores correspondentes
        *          às seguintes cidades:
        *
        * - Sao Paulo: 1000000-5999999 e 8000000-8499999
        * - Rio de Janeiro: 20000000-26600999
        * - Brasilia: 70000000-70999999
        * - Salvador: 40000000-41999999
        * - Fortaleza: 60000000-60999999

        * @param cep Valor a ser escrito no atributo cep.
        * @throw invalid_argument Se valor passado não for válido.
        */
        CEP(int);

        /**
        * @brief Escrita do valor em cep, se válido.
        * @details Para ser válido, o cep passado deve pertencer às faixas de valores correspondentes
        *          às seguintes cidades:
        *
        * - Sao Paulo: 1000000-5999999 e 8000000-8499999
        * - Rio de Janeiro: 20000000-26600999
        * - Brasilia: 70000000-70999999
        * - Salvador: 40000000-41999999
        * - Fortaleza: 60000000-60999999
        *
        * @param cep Valor a ser escrito no atributo cep.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void setCEP(int);

        /**
        * @brief Leitura do valor armazenado em cep.
        * @return cep Retorna inteiro com valor armazenado em cep.
        */
        int getCEP();

        /**
        * @brief Leitura da string armazenado em cidade.
        * @return cidade Retorna string com nome da cidade.
        */
        std::string getCidade();

    private:
        int cep;

        /**
        * @brief Verifica se o cep é válido.
        * @details Verifica se o cep está nas faixas pertencentes às cidades possíveis.
        * @param cep Cep a ser verificado.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void valida(int);
};

#endif // CEP_H
