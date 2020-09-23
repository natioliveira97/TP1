#ifndef TESTCODIGODEAGENCIA_H
#define TESTCODIGODEAGENCIA_H

#include <string>
#include <BaseTest.h>
#include <CodigoDeAgencia.h>

class TestCodigoDeAgencia: public BaseTest
{
    public:
        TestCodigoDeAgencia();
        ~TestCodigoDeAgencia();

        int run();

    private:
        std::string VALOR_VALIDO = "1234";
        std::string VALOR_INVALIDO = "0000";
        int estado;

        CodigoDeAgencia *codigo;

        void testCodigoValido();
        void testCodigoInvalido();
};

#endif // TESTCODIGODEAGENCIA_H
