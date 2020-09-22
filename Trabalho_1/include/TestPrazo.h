#ifndef TESTPRAZO_H
#define TESTPRAZO_H

#include <BaseTest.h>
#include <Prazo.h>

class TestPrazo: public BaseTest
{
    public:
        static const int SUCESSO = 1;
        static const int FALHA = 0;
        TestPrazo();
        ~TestPrazo();
        int run();

    private:
        int VALOR_VALIDO = 1;
        int VALOR_INVALIDO = 1;
        int estado;

        Prazo *prazo;

        void testPrazoValido();
        void testPrazoInvalido();
};


#endif // TESTPRAZO_H
