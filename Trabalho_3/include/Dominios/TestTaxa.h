#ifndef TESTTAXA_H
#define TESTTAXA_H


#include "Dominios/BaseTest.h"
#include "Dominios/Taxa.h"

class TestTaxa: public BaseTest
{
    public:
        TestTaxa();
        ~TestTaxa();

        int run();

    private:
        int VALOR_VALIDO = 1;
        int VALOR_INVALIDO = 201;
        int estado;

        Taxa *taxa;

        void testTaxaValida();
        void testTaxaInvalida();
};

#endif // TESTTAXA_H
