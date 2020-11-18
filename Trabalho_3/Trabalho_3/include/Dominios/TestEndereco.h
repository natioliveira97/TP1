#ifndef TESTENDERECO_H
#define TESTENDERECO_H


#include <string>
#include "Dominios/BaseTest.h"
#include "Dominios/Endereco.h"

class TestEndereco: public BaseTest
{
    public:
        TestEndereco();
        ~TestEndereco();

        int run();

    private:
        std::string VALOR_VALIDO = "Rua 5 Bl.A Apto 503.";
        std::string VALOR_INVALIDO = "Rua  5 Bl.A Apto 503";
        int estado;

        Endereco *endereco;

        void testEnderecoValido();
        void testEnderecoInvalido();
};

#endif // TESTENDERECO_H
