#ifndef TESTHORARIO_H
#define TESTHORARIO_H

#include <string>
#include <Horario.h>
#include <iostream>

/**
* @file TestHorario.h
* @author L’via Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contŽm a implementa‹o da classe de teste da classe Horario. Essa classe realiza exemplo de teste
* com valor v‡lido e exemplo de teste com valor inv‡lido
*/
class TestHorario
{
    public:
        /**
        * @brief Construtor default.
        * @details Cria ponteiro e aloca mem—ria para instancia da classe Horario.
        */
        TestHorario();

        /**
        * @brief Destrutor default.
        * @details Desaloca mem—ria.
        */
        ~TestHorario();

        /**
        * @brief Realiza teste de entrada v‡lida e de entrada inv‡lida.
        */
        void run();

    private:
        std::string VALOR_VALIDO = "13:03";
        std::string VALOR_INVALIDO = "17:01";

        Horario *horario;

        /**
        * @brief Realiza teste de entrada v‡lida.
        */
        void testHorarioValido();

        /**
        * @brief Realiza teste de entrada inv‡lida.
        */
        void testHorarioInvalido();
};

#endif // TESTHORARIO_H
