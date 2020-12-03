#ifndef TESTNOME_H
#define TESTNOME_H


#include <string>
#include "Dominios/BaseTest.h"
#include "Dominios/Nome.h"

class TestNome: public BaseTest
{
    public:
        TestNome();
        ~TestNome();

        int run();

    private:
        std::string VALOR_VALIDO = "Maria Rocha";
        std::string VALOR_INVALIDO = "Maria dos Santos";
        int estado;

        Nome *nome;

        void testNomeValido();
        void testNomeInvalido();
};
#endif // TESTNOME_H
