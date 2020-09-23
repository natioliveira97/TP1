#ifndef TESTCODIGODEBANCO_H
#define TESTCODIGODEBANCO_H

#include <string>
#include <BaseTest.h>
#include <CodigoDeBanco.h>

class TestCodigoDeBanco: public BaseTest
{
    public:
        TestCodigoDeBanco();
        ~TestCodigoDeBanco();

        int run();

    private:
        std::string VALOR_VALIDO = "033";
        std::string VALOR_INVALIDO = "342";
        int estado;

        CodigoDeBanco *codigo;

        void testCodigoValido();
        void testCodigoInvalido();
};

#endif // TESTCODIGODEBANCO_H
