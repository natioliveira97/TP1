#ifndef CPF_H
#define CPF_H

#include <string>
#include <regex>
#include <iostream>
#include <stdlib.h>

/**
* Classe de domínio que armazena o CPF.
*/
class CPF
{
    public:
        /**
        * @brief Construtor.
        * Inicializa o atributo cpf com a string '000.000.000-00'.
        */
        CPF();
        /**
        * @brief Escrita do valor em cpf, se válido.
        * @param cpf String a ser escrita no atributo.
        */
        void setCPF(std::string);
        /**
        * @brief Leitura do valor armazenado em cpf.
        * @return cpf
        */
        std::string getCPF();

    private:
        std::string cpf;
        /**
        * @brief Verifica se o dígito verificador é válido.
        * @param codigo Código a ser verificado.
        */
        void validaDigitoVerificador(std::string);
        /**
        * @brief Verifica se o cpf é válido.
        * Verifica se o cpf fornecido está no formato certo e, ao chamar validaDigitoVerificador(),
        * verifica se o dígito verificador está correto.
        * @param cpf CPF a ser verificado.
        */
        void valida(std::string);
};

#endif // CPF_H

