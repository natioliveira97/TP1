#ifndef CODIGODEBANCO_H
#define CODIGODEBANCO_H

#include <string>

/**
* Classe de dom�nio que armazena o c�digo de Banco e seu respectivo Banco.
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
        * @brief Escrita do valor em codigo, se v�lido, e do seu respctivo Banco em banco.
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
        * @brief Verifica se o c�digo � v�lido.
        * Verifica se o c�digo fornecido corresponde a um dos cinco maiores bancos brasileiros.
        * @param codigo C�digo a ser verificado.
        */
        bool valida(std::string);
};

#endif // CODIGODEBANCO_H
