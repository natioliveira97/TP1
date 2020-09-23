#ifndef TESTCLASSE_H
#define TESTCLASSE_H

#include <string>
#include <BaseTest.h>
#include <Classe.h>

class TestClasse: public BaseTest
{
    public:
        TestClasse();
        ~TestClasse();
        int run();

    private:
        std::string VALOR_VALIDO = "CDB";
        std::string VALOR_INVALIDO = "ABC";
        int estado;
        Classe *classe;

        void testClasseValida();
        void testClasseInvalida();
};

#endif // TESTCLASSE_H
