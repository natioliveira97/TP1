#ifndef CODIGODEAGENCIA_H
#define CODIGODEAGENCIA_H

#include <string>
#include <regex>

/**
* Classe de domínio que armazena o código de agência.
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
        * @brief Escrita do valor em codigo, se válido.
        * @param codigo String a ser escrita no atributo.
        * @return true Se foi possível escrever no atributo.
        * @return false Se não foi possível escrever no atributo.
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
        * @brief Verifica se o código é válido.
        * Verifica se o código fornecido possui exatamente quatro dígitos e é diferente de '0000'.
        * @param codigo Código a ser verificado.
        * @return true Se o valor é válido.
        * @return false Se o valor não é válido.
        */
        std::string codigo;
};

#endif // CODIGODEAGENCIA_H
