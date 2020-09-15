#ifndef CODIGODEPRODUTO_H
#define CODIGODEPRODUTO_H

#include <string>
#include <regex>

/**
* Classe de dom�nio que armazena o c�digo de produto.
*/
class CodigoDeProduto
{
    public:
        /**
        * @brief Construtor.
        * Inicializa o atributo codigo como string vazia.
        */
        CodigoDeProduto();
        /**
        * @brief Escrita do valor em codigo, se v�lido.
        * @param codigo String a ser escrita no atributo.
        */
        void setCodigoDeProduto(std::string);
        /**
        * @brief Leitura do valor armazenado em codigo.
        * @return codigo
        */
        std::string getCodigoDeProduto();

    private:
        std::string codigo;
        /**
        * @brief Verifica se o c�digo � v�lido.
        * Verifica se o c�digo fornecido possui exatamente tr�s d�gitos e � diferente de '000'.
        * @param codigo C�digo a ser verificado.
        */
        void valida(std::string);
};

#endif // CODIGODEPRODUTO_H

