#ifndef CODIGODEAPLICACAO_H
#define CODIGODEAPLICACAO_H

#include <string>
#include <regex>

/**
* Classe de domínio que armazena o código de aplicação.
*/
class CodigoDeAplicacao
{
    public:
        /**
        * @brief Construtor.
        * Inicializa o atributo codigo como string vazia.
        */
        CodigoDeAplicacao();
        /**
        * @brief Escrita do valor em codigo, se válido.
        * @param codigo String a ser escrita no atributo.
        */
        void setCodigoDeAplicacao(std::string);
        /**
        * @brief Leitura do valor armazenado em codigo.
        * @return codigo
        */
        std::string getCodigoDeAplicacao();

    private:
        std::string codigo;
        /**
        * @brief Verifica se o código é válido.
        * Verifica se o código fornecido possui exatamente cinco dígitos e é diferente de '00000'.
        * @param codigo Código a ser verificado.
        */
        void valida(std::string);
};

#endif // CODIGODEAPLICACAO_H

