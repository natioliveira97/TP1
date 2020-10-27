#ifndef TESTSENHA_H
#define TESTSENHA_H


#include <string>
#include "Dominios/BaseTest.h"
#include "Dominios/Senha.h"

class TestSenha: public BaseTest
{
    public:
        TestSenha();
        ~TestSenha();

        int run();

    private:
        std::string VALOR_VALIDO = "123456";
        std::string VALOR_INVALIDO = "0000";
        int estado;

        Senha *senha;

        void testSenhaValida();
        void testSenhaInvalida();
};

#endif // TESTCODIGODEAGENCIA_H

