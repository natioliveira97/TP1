#ifndef TESTCONTA_H
#define TESTCONTA_H

#include "Entidades/BaseTest.h"
#include "Entidades/Conta.h"
#include "Dominios/CodigoDeBanco.h"
#include "Dominios/CodigoDeAgencia.h"
#include "Dominios/Numero.h"
#include <string>

class TestConta: public BaseTest
{
    public:
        TestConta();
        ~TestConta();

        int run();

    private:
        std::string banco_valido = "033";
        std::string agencia_valida = "1234";
        std::string numero_valido = "111111-6";

        Conta *conta;
        int estado;

        void testBancoValido();
        void testAgenciaValida();
        void testNumeroValido();

};


#endif // TESTCONTA
