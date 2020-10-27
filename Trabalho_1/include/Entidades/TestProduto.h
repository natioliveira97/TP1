#ifndef TESTPRODUTO_H
#define TESTPRODUTO_H

#include "Entidades/BaseTest.h"
#include "Entidades/Produto.h"
#include "Dominios/CodigoDeProduto.h"
#include "Dominios/Classe.h"
#include "Dominios/Emissor.h"
#include "Dominios/Prazo.h"
#include "Dominios/Taxa.h"
#include "Dominios/Data.h"
#include "Dominios/Horario.h"
#include "Dominios/ValorMinimo.h"
#include <string.h>

class TestProduto : public BaseTest
{
    public:
        TestProduto();
        ~TestProduto();

        int run();

    private:

        std::string codigo_valido = "123";
        std::string classe_valida ="CDB";
        std::string emissor_valido = "Tesouro Direto";
        int prazo_valido = 6;
        float taxa_valida = 7.8;
        std::string vencimento_valido = "04/12/2025";
        std::string horario_valido = "14:35";
        float valor_valido = 1000.00;


        Produto *produto;
        int estado;


        void testCodigoValido();
        void testClasseValida();
        void testEmissorValido();
        void testPrazoValido();
        void testTaxaValida();
        void testVencimentoValido();
        void testHorarioValido();
        void testValorValido();

};


#endif // TESTPRODUTO_H
