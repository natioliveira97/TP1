#ifndef TESTAPLICACAO_H
#define TESTAPLICACAO_H

#include "Entidades/BaseTest.h"
#include "Entidades/Aplicacao.h"
#include "Dominios/CodigoDeAplicacao.h"
#include "Dominios/ValorDeAplicacao.h"
#include "Dominios/Data.h"
#include <string>

class TestAplicacao: public BaseTest
{
    public:
        TestAplicacao();
        ~TestAplicacao();

        int run();

    private:
        std::string codigo_valido = "22345";
        float valor_valido = 1000000.00;
        std::string data_valida = "01/01/2020";

        Aplicacao *aplicacao;
        int estado;

        void testCodigoValido();
        void testValorValido();
        void testDataValida();

};


#endif // TESTAPLICACAO
