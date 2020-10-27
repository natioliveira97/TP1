#ifndef TESTNUMERO_H
#define TESTNUMERO_H


#include "Dominios/BaseTest.h"
#include "Dominios/Numero.h"

class TestNumero: public BaseTest
{
    public:
        TestNumero();
        ~TestNumero();

        int run();

    private:
        std::string VALOR_VALIDO = "111111-6";
        std::string VALOR_INVALIDO = "111111-5";
        int estado;

        Numero *numero;

        void testNumeroValido();
        void testNumeroInvalido();
};

#endif // TESTNUMERO_H
