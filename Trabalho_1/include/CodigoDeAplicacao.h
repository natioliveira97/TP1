#ifndef CODIGODEAPLICACAO_H
#define CODIGODEAPLICACAO_H

#include <string>
#include <regex>

/**
* Classe de dom�nio que armazena o c�digo de aplica��o.
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
        * @brief Escrita do valor em codigo, se v�lido.
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
        * @brief Verifica se o c�digo � v�lido.
        * Verifica se o c�digo fornecido possui exatamente cinco d�gitos e � diferente de '00000'.
        * @param codigo C�digo a ser verificado.
        */
        void valida(std::string);
};

#endif // CODIGODEAPLICACAO_H

