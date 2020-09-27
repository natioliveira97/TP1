#ifndef TESTCEP_H
#define TESTCEP_H

#include <BaseTest.h>
#include <CEP.h>
#include <string>

class TestCEP: public BaseTest
{
    public:
        TestCEP();
        ~TestCEP();

        int run();

    private:
        int VALOR_VALIDO = 70000000;
        int VALOR_INVALIDO = 71000000;
        int estado;

        CEP *cep;

        void testCEPValido();
        void testCEPInvalido();
};

#endif // TESTCEP_H
