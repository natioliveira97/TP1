#ifndef TESTCPF_H
#define TESTCPF_H

#include <string>
#include "Dominios/BaseTest.h"
#include "Dominios/CPF.h"

class TestCPF: public BaseTest
{
    public:
        TestCPF();
        ~TestCPF();

        int run();

    private:
        std::string VALOR_VALIDO = "052.811.038-14";
        std::string VALOR_INVALIDO = "233.454.654-15";
        int estado;

        CPF *cpf;

        void testCPFValido();
        void testCPFInvalido();
};

#endif // TESTCPF_H
