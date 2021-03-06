#ifndef TESTCODIGODEAPLICACAO_H
#define TESTCODIGODEAPLICACAO_H

#include <string>
#include "Dominios/BaseTest.h"
#include "Dominios/CodigoDeAplicacao.h"

class TestCodigoDeAplicacao: public BaseTest
{
    public:
        TestCodigoDeAplicacao();
        ~TestCodigoDeAplicacao();

        int run();

    private:
        std::string VALOR_VALIDO = "22345";
        std::string VALOR_INVALIDO = "2a345";
        int estado;

        CodigoDeAplicacao *codigo;

        void testCodigoValido();
        void testCodigoInvalido();
};

#endif // TESTCODIGODEAPLICACAO_H
