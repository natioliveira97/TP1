#ifndef TESTHORARIO_H
#define TESTHORARIO_H

#include <string>
#include <Horario.h>
#include <iostream>

/**
* @file TestHorario.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de teste da classe Horario. Essa classe realiza exemplo de teste
* com valor válido e exemplo de teste com valor inválido
*/
class TestHorario
{
    public:
        /**
        * @brief Construtor default.
        * @details Cria ponteiro e aloca memória para instancia da classe Horario.
        */
        TestHorario();

        /**
        * @brief Destrutor default.
        * @details Desaloca memória.
        */
        ~TestHorario();

        /**
        * @brief Realiza teste de entrada válida e de entrada inválida.
        */
        void run();

    private:
        std::string VALOR_VALIDO = "13:03";
        std::string VALOR_INVALIDO = "17:01";

        Horario *horario;

        /**
        * @brief Realiza teste de entrada válida.
        */
        void testHorarioValido();

        /**
        * @brief Realiza teste de entrada inválida.
        */
        void testHorarioInvalido();
};

#endif // TESTHORARIO_H
