#ifndef TESTPRAZO_H
#define TESTPRAZO_H

#include "Dominios/BaseTest.h"
#include "Dominios/Prazo.h"

class TestPrazo: public BaseTest
{
    public:
        TestPrazo();
        ~TestPrazo();
        int run();

    private:
        int VALOR_VALIDO = 6;
        int VALOR_INVALIDO = 1;
        int estado;

        Prazo *prazo;

        void testPrazoValido();
        void testPrazoInvalido();
};


#endif // TESTPRAZO_H
