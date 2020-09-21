#ifndef EMISSOR_H
#define EMISSOR_H

#include <string>
#include <regex>
#include <iostream>

/**
* @file Emissor.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Emissor. Essa classe armazena o atributo emissor no formato
* de uma string.
*/

/**
* @brief Armazena o emissor de produto de investimento.
*/
class Emissor
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo emissor como string vazia.
        */
        Emissor();

        /**
        * @brief Escrita do valor em emissor, se válido.
        * @details Para ser válido, o emissor fornecido deve possuir de 5 a 30 caracteres.
        *          Cada caracter pode ser letra (A-Z ou a-z), dígito (0 –9), caracter "-",
        *          ponto ou espaço. Apenas letras e dígitos podem estar em sequência.
        *          Em termo cujo primeiro caracter é letra, a letra deve ser maiúscula.
        * @param codigo String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void setEmissor(std::string);

        /**
        * @brief Leitura do valor armazenado em emissor.
        * @return emissor Retorna string com valor armazenado em emmissor.
        */
        std::string getEmissor();

    private:
        std::string emissor;

        /**
        * @brief Verifica se o emissor é válido.
        * @details Para ser válido, o emissor fornecido deve possuir de 5 a 30 caracteres.
        *          Cada caracter pode ser letra (A-Z ou a-z), dígito (0 –9), caracter "-",
        *          ponto ou espaço. Apenas letras e dígitos podem estar em sequência.
        *          Em termo cujo primeiro caracter é letra, a letra deve ser maiúscula.
        * @param codigo String a ser verificado.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void valida(std::string);
};

#endif // EMISSOR_H
