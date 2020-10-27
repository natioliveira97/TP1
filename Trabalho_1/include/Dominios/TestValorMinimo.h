#ifndef TESTVALORMINIMO_H
#define TESTVALORMINIMO_H

#include "Dominios/BaseTest.h"
#include "Dominios/ValorMinimo.h"

class TestValorMinimo: public BaseTest
{
    public:
        TestValorMinimo();
        ~TestValorMinimo();

        int run();


    private:
        float VALOR_VALIDO = 1000.0;
        float VALOR_INVALIDO = 2000.0;
        int estado;


        ValorMinimo *valor;

        void testValorMinimoValido();
        void testValorMinimoInvalido();
};


#endif // TESTVALORMINIMO_H
