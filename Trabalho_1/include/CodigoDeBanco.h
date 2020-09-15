#ifndef CODIGODEBANCO_H
#define CODIGODEBANCO_H

#include <regex>
#include <string>
#include <vector>

/**
* Classe de domínio que armazena o código de Banco e seu respectivo Banco.
*/
class CodigoDeBanco
{
    public:
        /**
        * @brief Construtor.
        * Inicializa o atributo codigo como string vazia.
        */
        CodigoDeBanco();
        /**
        * @brief Escrita do valor em codigo, se válido, e do seu respctivo Banco em banco.
        * @param codigo String a ser escrita no atributo.
        */
        void setCodigoDeBanco(std::string);
        /**
        * @brief Leitura do valor armazenado em codigo.
        * @return codigo
        */
        std::string getCodigoDeBanco();
        /**
        * @brief Leitura do valor armazenado em banco.
        * @return codigo
        */
        std::string getBanco();

    private:
        const std::vector<std::string> CODIGOS = {"341", "001", "237", "104", "033"};
        const std::vector<std::string> BANCOS = {"Banco Itau Unibanco",
                                                 "Banco do Brasil",
                                                 "Banco Bradesco",
                                                 "Caixa Economica Federal",
                                                 "Banco Santander"};
        std::string codigo;
        /**
        * @brief Verifica se o código é válido.
        * Verifica se o código fornecido corresponde a um dos cinco maiores bancos brasileiros.
        * @param codigo Código a ser verificado.
        */
        void valida(std::string);
};

#endif // CODIGODEBANCO_H

