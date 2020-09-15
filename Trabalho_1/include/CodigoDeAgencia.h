#ifndef CODIGODEAGENCIA_H
#define CODIGODEAGENCIA_H

#include <string>
#include <regex>

/**
* Classe de dom�nio que armazena o c�digo de ag�ncia.
*/
class CodigoDeAgencia
{
    public:
        /**
        * @brief Construtor.
        * Inicializa o atributo codigo como string vazia.
        */
        CodigoDeAgencia();
        /**
        * @brief Escrita do valor em codigo, se v�lido.
        * @param codigo String a ser escrita no atributo.
        * @return true Se foi poss�vel escrever no atributo.
        * @return false Se n�o foi poss�vel escrever no atributo.
        */
        void setCodigoDeAgencia(std::string);
        /**
        * @brief Leitura do valor armazenado em codigo.
        * @return codigo
        */
        std::string getCodigoDeAgencia();

    private:
        void valida(std::string);
        /**
        * @brief Verifica se o c�digo � v�lido.
        * Verifica se o c�digo fornecido possui exatamente quatro d�gitos e � diferente de '0000'.
        * @param codigo C�digo a ser verificado.
        * @return true Se o valor � v�lido.
        * @return false Se o valor n�o � v�lido.
        */
        std::string codigo;
};

#endif // CODIGODEAGENCIA_H
