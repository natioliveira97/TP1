#ifndef CODIGODEPRODUTO_H
#define CODIGODEPRODUTO_H

#include <string>
#include <regex>

/**
* Classe de domínio que armazena o código de produto.
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
        * @brief Escrita do valor em codigo, se válido.
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
        * @brief Verifica se o código é válido.
        * Verifica se o código fornecido possui exatamente três dígitos e é diferente de '000'.
        * @param codigo Código a ser verificado.
        */
        void valida(std::string);
};

#endif // CODIGODEPRODUTO_H

