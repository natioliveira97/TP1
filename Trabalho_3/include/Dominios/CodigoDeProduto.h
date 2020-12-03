#ifndef CODIGODEPRODUTO_H
#define CODIGODEPRODUTO_H

#include <string>
#include <regex>

/**
* @file CodigoDeProduto.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Código de Produto. Essa classe armazena o atributo codigo no formato
* de uma string.
*/



/**
* @brief Armazena o código de produto.
*/
class CodigoDeProduto
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo codigo como string vazia.
        */
        CodigoDeProduto();

        /**
        * @brief Construtor que inicializa codigo com valor.
        * @details Para ser válido, o código fornecido deve possuir exatamente
        *          três dígitos e ser diferente de '000'.
        * @param codigo String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        CodigoDeProduto(std::string);

        /**
        * @brief Escrita do valor em codigo, se válido.
        * @details Para ser válido, o código fornecido deve possuir exatamente
        *          três dígitos e ser diferente de '000'.
        * @param codigo String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void setCodigoDeProduto(std::string);

        /**
        * @brief Leitura do valor armazenado em codigo.
        * @return codigo Retorna string com valor armazenado em codigo.
        */
        std::string getCodigoDeProduto();

    private:
        std::string codigo;

        /**
        * @brief Verifica se o código é válido.
        * @details Verifica se o código fornecido possui exatamente três dígitos e é diferente de '000'.
        * @param codigo Código a ser verificado.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void valida(std::string);
};


#endif // CODIGODEPRODUTO_H

