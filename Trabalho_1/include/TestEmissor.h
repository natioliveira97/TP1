#ifndef TESTEMISSOR_H
#define TESTEMISSOR_H

#include <string>
#include <BaseTest.h>
#include <Emissor.h>

class TestEmissor: public BaseTest
{
    public:
        TestEmissor();
        ~TestEmissor();

        int run();


    private:
        std::string VALOR_VALIDO = "Emissor Valido90.";
        std::string VALOR_INVALIDO = "emissor Invalido";
        int estado;

        Emissor *emissor;

        void testEmissorValido();
        void testEmissorInvalido();
};

#endif // TESTEMISSOR_H
