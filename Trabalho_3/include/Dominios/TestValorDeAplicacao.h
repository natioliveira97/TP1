#ifndef TESTVALORDEAPLICACAO_H
#define TESTVALORDEAPLICACAO_H

#include "Dominios/BaseTest.h"
#include "Dominios/ValorDeAplicacao.h"

class TestValorDeAplicacao: public BaseTest
{
    public:
        TestValorDeAplicacao();
        ~TestValorDeAplicacao();

        int run();

    private:
        float VALOR_VALIDO = 0.0;
        float VALOR_INVALIDO = 1000000.50;
        int estado;

        ValorDeAplicacao *valor;

        void testValorDeAplicacaoValido();
        void testValorDeAplicacaoInvalido();
};

#endif // TESTVALORDEAPLICACAO_H
