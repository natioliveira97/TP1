#ifndef CODIGODEBANCO_H
#define CODIGODEBANCO_H

#include <string>

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
        bool setCodigoDeBanco(std::string);
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
        std::string banco;
        std::string codigo;
        /**
        * @brief Verifica se o código é válido.
        * Verifica se o código fornecido corresponde a um dos cinco maiores bancos brasileiros.
        * @param codigo Código a ser verificado.
        */
        bool valida(std::string);
};

#endif // CODIGODEBANCO_H
