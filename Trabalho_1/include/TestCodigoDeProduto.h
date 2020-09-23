#ifndef TESTCODIGODEPRODUTO_H
#define TESTCODIGODEPRODUTO_H

#include <string>
#include <BaseTest.h>
#include <CodigoDeProduto.h>

class TestCodigoDeProduto: public BaseTest
{
    public:
        TestCodigoDeProduto();
        ~TestCodigoDeProduto();

        int run();

    private:
        std::string VALOR_VALIDO = "123";
        std::string VALOR_INVALIDO = "1234";
        int estado;

        CodigoDeProduto *codigo;

        void testCodigoValido();
        void testCodigoInvalido();
};

#endif // TESTCODIGODEPRODUTO_H
