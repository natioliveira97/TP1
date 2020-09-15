#ifndef TESTPRAZO_H
#define TESTPRAZO_H

#include <Prazo.h>
#include <iostream>

/**
* @file TestPrazo.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de teste da classe Prazo. Essa classe realiza exemplo de teste
* com valor válido e exemplo de teste com valor inválido
*/

class TestPrazo
{
    public:
        /**
        * @brief Construtor default.
        * @details Cria ponteiro e aloca memória para instancia da classe Prazo.
        */
        TestPrazo();

        /**
        * @brief Destrutor default.
        * @details Desaloca memória.
        */
        ~TestPrazo();

        /**
        * @brief Realiza teste de entrada válida e de entrada inválida.
        */
        void run();

    private:
        int VALOR_VALIDO = 60;
        int VALOR_INVALIDO = 2;

        Prazo *prazo;

        /**
        * @brief Realiza teste de entrada válida.
        */
        void testPrazoValido();

        /**
        * @brief Realiza teste de entrada inválida.
        */
        void testPrazoInvalido();
};

#endif // TESTPRAZO_H
