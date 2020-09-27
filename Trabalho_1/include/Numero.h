#ifndef NUMERO_H
#define NUMERO_H

#include <string>
#include <regex>
#include <stdexcept>

/**
* @file Numero.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementção da classe de domínio Numero. Essa classe armazena o atributo prazo no formato
* string.
*/

/**
* @brief Armazena o Numero.
*/
class Numero
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo numero com a string vazia.
        */
        Numero();

        /**
        * @brief Construtor que inicializa a classe com valor numero.
        * @details Para ser válido, o numero fornecido deve estar no formato XXXXXX-Y onde cada X é dígito (0 – 9)
        * e Y é dígito verificador calculado por meio de algorítmo apropriado.
        * @param numero String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        Numero(std::string);

        /**
        * @brief Escrita do valor em numero, se válido.
        * @details Para ser válido, o numero fornecido deve estar no formato XXXXXX-Y onde cada X é dígito (0 – 9)
        * e Y é dígito verificador calculado por meio de algorítmo apropriado.
        * @param numero String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void setNumero(std::string);

        /**
        * @brief Leitura do valor armazenado em numero.
        * @return Retorna string com valor armazenado em numero.
        */
        std::string getNumero();

    private:
        std::string numero;

        /**
        * @brief Verifica se o numero é válido.
        * @details Para ser válido, o numero fornecido deve estar no formato XXXXXX-Y onde cada X é dígito (0 – 9)
        * e Y é dígito verificador calculado por meio de algorítmo apropriado.
        * @param numero String a ser escrita no atributo.
        * @param numero Valor a ser verificado.
        */
        void valida(std::string);
};

#endif // NUMERO_H
