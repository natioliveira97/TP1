#ifndef TESTPRAZO_H
#define TESTPRAZO_H

#include <Prazo.h>
#include <iostream>

/**
* @file TestPrazo.h
* @author L�via Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo cont�m a implementa��o da classe de teste da classe Prazo. Essa classe realiza exemplo de teste
* com valor v�lido e exemplo de teste com valor inv�lido
*/

class TestPrazo
{
    public:
        /**
        * @brief Construtor default.
        * @details Cria ponteiro e aloca mem�ria para instancia da classe Prazo.
        */
        TestPrazo();

        /**
        * @brief Destrutor default.
        * @details Desaloca mem�ria.
        */
        ~TestPrazo();

        /**
        * @brief Realiza teste de entrada v�lida e de entrada inv�lida.
        */
        void run();

    private:
        int VALOR_VALIDO = 60;
        int VALOR_INVALIDO = 2;

        Prazo *prazo;

        /**
        * @brief Realiza teste de entrada v�lida.
        */
        void testPrazoValido();

        /**
        * @brief Realiza teste de entrada inv�lida.
        */
        void testPrazoInvalido();
};

#endif // TESTPRAZO_H
