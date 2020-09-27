#ifndef TESTNUMERO_H
#define TESTNUMERO_H


#include <BaseTest.h>
#include <Numero.h>

class TestNumero: public BaseTest
{
    public:
        TestNumero();
        ~TestNumero();

        int run();

    private:
        std::string VALOR_VALIDO = "70000000";
        std::string VALOR_INVALIDO = "71000000";
        int estado;

        Numero *numero;

        void testNumeroValido();
        void testNumeroInvalido();
};

#endif // TESTNUMERO_H
