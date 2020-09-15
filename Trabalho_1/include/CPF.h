#ifndef CPF_H
#define CPF_H

#include <string>
#include <regex>
#include <iostream>
#include <stdlib.h>

/**
* Classe de dom�nio que armazena o CPF.
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
        * @brief Escrita do valor em cpf, se v�lido.
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
        * @brief Verifica se o d�gito verificador � v�lido.
        * @param codigo C�digo a ser verificado.
        */
        void validaDigitoVerificador(std::string);
        /**
        * @brief Verifica se o cpf � v�lido.
        * Verifica se o cpf fornecido est� no formato certo e, ao chamar validaDigitoVerificador(),
        * verifica se o d�gito verificador est� correto.
        * @param cpf CPF a ser verificado.
        */
        void valida(std::string);
};

#endif // CPF_H

