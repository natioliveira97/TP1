#ifndef CODIGODEBANCO_H
#define CODIGODEBANCO_H

#include <regex>
#include <string>
#include <vector>

/**
* @file CodigoDeBanco.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Código de Banco. Essa classe armazena o atributo codigo no formato
* de uma string.
*/

/**
* @brief Armazena o código de Banco e seu respectivo Banco.
*/
class CodigoDeBanco
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo codigo como string vazia.
        */
        CodigoDeBanco();

        /**
        * @brief Construtor que inicializa codigo com um valor.
        * @details Para ser válido, o código fornecido deve corresponder ao código dos cinco maiores bancos
        *          brasilieros, são eles: "Banco Itau Unibanco", "Banco do Brasil", "Banco Bradesco",
        *          "Caixa Economica Federal" e "Banco Santander".
        *          Seus respectivos códigos são: "341", "001", "237", "104" e "033".
        * @param codigo String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        CodigoDeBanco(std::string);

        /**
        * @brief Escrita do valor em codigo, se válido.
        * @details Para ser válido, o código fornecido deve corresponder ao código dos cinco maiores bancos
        *          brasilieros, são eles: "Banco Itau Unibanco", "Banco do Brasil", "Banco Bradesco",
        *          "Caixa Economica Federal" e "Banco Santander".
        *          Seus respectivos códigos são: "341", "001", "237", "104" e "033".
        * @param codigo String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void setCodigoDeBanco(std::string);

        /**
        * @brief Leitura do valor armazenado em codigo.
        * @return codigo Retorna string com valor armazenado em codigo.
        */
        std::string getCodigoDeBanco();

        /**
        * @brief Leitura do valor de banco correspondenete ao código armazenado.
        * @return banco Retorna string com valor correspondente ao banco.
        */
        std::string getBanco();

    private:
        /**
        * Códigos de banco válidos.
        */
        const std::vector<std::string> CODIGOS = {"341", "001", "237", "104", "033"};

        /**
        * Bancos correspondentes aos códigos.
        */
        const std::vector<std::string> BANCOS = {"Banco Itau Unibanco",
                                                 "Banco do Brasil",
                                                 "Banco Bradesco",
                                                 "Caixa Economica Federal",
                                                 "Banco Santander"};
        std::string codigo;

        /**
        * @brief Verifica se o código é válido.
        * @details Verifica se o código fornecido corresponde a um dos cinco maiores bancos brasileiros.
        * @param codigo Código a ser verificado.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void valida(std::string);
};

#endif // CODIGODEBANCO_H

