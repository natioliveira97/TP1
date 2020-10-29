#ifndef CPF_H
#define CPF_H

#include <string>
#include <regex>
#include <iostream>
#include <stdlib.h>

/**
* @file CPF.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio CPF. Essa classe armazena o atributo cpf no formato
* de uma string.
*/

/**
* @brief Armazena um cpf.
*/
class CPF
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo cpf com a string vazia.
        */
        CPF();

        CPF(std::string);

        /**
        * @brief Escrita do valor em cpf, se válido.
        * @details Para ser válido, o cpf fornecido deve estar no formato 'XXX.XXX.XXX-YY'
        *          e os dígitos verificadores devem ser válidos de acordo com a legislação brasileira.
        *          Os dígitos verificadores correspondem aos dois dígitos após o traço "-" e devem ser calculados de acordo com:
        * @image html eq_cpf.jpg
        *
        * @param cpf String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void setCPF(std::string);

        /**
        * @brief Leitura do valor armazenado em cpf.
        * @return cpf Retorna string com valor armazenado em cpf.
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
        * @details Verifica se o cpf fornecido está no formato certo e, ao chamar validaDigitoVerificador(),
        *          verifica se o dígito verificador está correto.
        * @param cpf CPF a ser verificado.
        */
        void valida(std::string);
};

#endif // CPF_H

